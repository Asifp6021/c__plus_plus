/*

using type aliases we can give alternative name to our types.

suppose we are using

unsigned long long int <- it's very big. we can make it short using aliases and can use anything as name.

old way -> typedef unsigned long long  int HugeInt;

modern way ->  using hugeInt = unsigned long long int;

*/

#include <iostream>

int main()
{

    using HugeInt = unsigned long long int; // Recommended in modern C++
    // typedef unsigned long long int HugeInt; // Older C++ syntax for type aliases
    HugeInt huge_number{123378997};

    std::cout << "sizeof(unsigned long long int ) : " << sizeof(unsigned long long int) << std::endl;
    std::cout << "sizeof(HugeInt) : " << sizeof(HugeInt) << std::endl;

    std::cout << "huge_number : " << huge_number << std::endl;

    return 0;
}