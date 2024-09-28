#include <iostream>

void say_age(int *age); // Declaration, prototype

// original variable  which we are passing as arguments to the function that variable value going to be modified.

int main()
{

    int age{23};                                                                  // Local
    std::cout << "age (before call) : " << age << "&age : " << &age << std::endl; // 23
    say_age(&age);                                                                // Argument -> &age <- have to pass address.
    std::cout << "age (after call) : " << age << "&age : " << &age << std::endl;  // 24

    return 0;
}

void say_age(int *age)
{                                                                                          // Parameter
    ++(*age);                                                                              // and reference it using * operator.
    std::cout << "Hello , you are " << *age << " years old! &age : " << &age << std::endl; // 24
}