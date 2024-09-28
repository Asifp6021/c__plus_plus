/*
1. Both global and static variables have static storage duration. They life throughout the entire lifetime of the programs.

2. static variables are scoped to the function in which they are declared and used. if you try to access them outside that function. You'll get a compiler error.

3. global variables are scoped to the global scopes of the file where they are declared they are accessible and usable through out the entire file.

here is static means lifetime.

*/

#include <iostream>

size_t dog_count{0}; // Global scope mens scope and lifetime available for entire application. and lifetime dies when program dies

unsigned int add_student()
{
    static unsigned int student_count{0}; // The scope of this var is in add_student,
                                          // but it's life time goes beyond the function execution.
                                          // only lifetime is available through entire application scope is not available beyond function. in do_something function it is throwing error when we are accessing it.
    student_count++;
    ++dog_count;
    return student_count;
}

void do_something()
{
    //--student_count; // Compiler error
    ++dog_count;
}

int main()
{

    /*
    std::cout << "student count : " << add_student()  << std::endl;//1
    std::cout << "student count : " << add_student()  << std::endl;//2
    std::cout << "student count : " << add_student()  << std::endl;//3
    */

    for (size_t i{}; i < 20; ++i)
    {
        std::cout << "student count : " << add_student() << std::endl;
    }

    return 0;
}