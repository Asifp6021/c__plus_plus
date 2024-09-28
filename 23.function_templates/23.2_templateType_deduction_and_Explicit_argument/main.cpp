/*
in template type at seeing argument type compiler used to generate function of those type. with parameter and return

but now I am explictitely telling compiler that take this type. and we can pass different type of argument.

int, double we can pass these diffrent type as argument as we know compiler implicitly convert it.
*/

#include <iostream>
#include <string>

template <typename T>
T maximum(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{

    int a{10};
    int b{23};
    double c{34.7};
    double d{23.4};
    std::string e{"hello"};
    std::string f{"world"};

    // Explicit template arguments

    auto max = maximum<double>(a, d);
    // auto max = maximum<double>(a, f); //but compiler can not convert std::string to double implicitly that is whey error getting.
    std::cout << "max : " << max << std::endl;

    return 0;
}