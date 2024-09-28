<!-- copy constructor -->

these constructor are called by the compiler to make copies when we try to build(construct) a class object from another class object.

note -: it is possible to set up your own copy constructor. This will disable the default one provided by the compiler. Yours will be the active one.

<!-- ------------------------------------------------------------------- -->

suppose I created person object from the constructor

person1 = {first_name: "john", last_name: "snow", age: 25};

and I want to copy all the person1 as it is for the person2 object.

person2 = person1 = {first_name: "john", last_name: "snow", age: 25};

so how can i do that ? I can do like this below.

Person p1("John", "Snow", 25);
p1.print_info();

    // Create a person copy
    Person p2(p1);
    p2.print_info();

    so now compiler is copying all the person1 as it is for person2.

    but wait moment is it ok for the compiler to copy person1 as it is.

    what if there is member variable which is using pointer. that means compiler will also copy address as it is for the person2.

    it will be problematic.

    so what we can do. see below.

<!-- -------------------------------------------------------------------- -->

I will create my own copy constructor who will copy the person1 as it is for the person2.

but still we don't have to blindly copy everything. we have to give new memory location for the pointer variable.

and should use syntax which supported by the c++ to create copy constructor.

// Don't blindly copy the pointer
Person(const Person &source_p); <- this is the syntax.

and definition for the copy constructor to tell what to do.

Person::Person(const Person& source_p)
: last_name(source_p.get_last_name()),
first_name(source_p.get_first_name()),
age(new int(\*(source_p.get_age())))

{
std::cout << "Copy constructor called" << std::endl;

}

see new memory address has been allocated for the age as it is pointer variable.

don't forget to delete that memory location using destructor.
