#include <iostream>

template <typename T>
const T &maximum(const T &a, const T &b); // Declaration/prototype -> reference access to original value and variable
// template <typename T> T maximum(T a, T b); // Declaration/prototype -> pass by value creates of copy of the original value and variable. and different memory address.

/*
above we have template overload one with reference and second with pass by value. we can't use both at the same time. compiler will confuse and throws error. so we have to use one of them.

*/

int main()
{

    double a{23.5};
    double b{51.2};

    std::cout << "Out - &a: " << &a << std::endl; // 0x111abc
    auto result = maximum(a, b);
    std::cout << "Out - &a: " << &a << std::endl; // 0x111abc

    return 0;
}

// Definition
template <typename T>
const T &maximum(const T &a, const T &b)
{
    std::cout << "In - &a: " << &a << std::endl; // // 0x111abc
    return (a > b) ? a : b;
}

/*
template <typename T> T maximum(T a, T b){
    std::cout << "In - &a: " << &a << std::endl; // // 0x111abc
    return (a > b ) ? a : b ;
}
*/