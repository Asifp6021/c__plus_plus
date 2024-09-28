constructor delegation is technique in c++ to have constructor use another constructor and avoid duplication.

<!-- ------------------------------------------------------- -->

explicit Square(double side_param);

Square(double side_param, const std::string &color_param, int shading_param);

    we have two constructor first constructor has one param and it requires lot of computation assume that.

    and second constructor has three param but it is also doing same computation that first constructor is doing.

    so it will create duplication and take lot of resources so we can do one thing we delegate first constructor to second constructor. means that big computation only will be handled by second  constructor.

    and we do it like this.

    Square::Square(double side_param)
    : Square{side_param, "black", 6}

{

}

using initializer list.

black and 6 these are the default arguments to satisfy second constructor as it is accepting three arguments.

<!-- ----------------------------------------- -->

if you do like this with name wise copy initialization it will not work

Square::Square(double side_param) {
Square(side_param, "black", 6)
}

<!-- --------------------------------------------------------------- -->

note -:

1. The one parameter constructor is called

2. before we get into the body of the one param constructor the compiler realizes this delegation and calls the three param constructor to do actual object creation with the provided data

3. the three param constructor constructs the object and initializes with the provided data. notice that the actual object is constructed by the three param constructor.

4. control reaches the body of the three param constructor.

5. control reaches the body of the single param constructor.

6. control goes back in main.

7. All these calls to constructors can be seen in the call stack with the debugger.

<!-- -------------------------------------------------------------------------- -->

note-> constructor delegation only work with constructor initializer way.

and constructor initialization there should be only constructor delegation.

    Square::Square(double side_param)
    : Square{side_param, "black", 6}

{

}

<!-- ---------------------------------------------- -->

if you initialize some other constructor variable it will give compiler error.

    Square::Square(double side_param)
    : m_position{position_param}, Square{side_param, "black", 6}

{

}

<!-- ------------------------------------------------ -->

but in curly base we can define other constructor variable it will not give any error.


Square::Square(double side_param)
    : Square{side_param, "black", 6}
{
    m_position = 45.8;
    std::cout << "One param constructor called" << std::endl;
}