/*

size of int is 4
size of int is 8

if there is function which has parameter int type.
can we pass double type to it.

double a{4.5};

if we pass then compiler will see and think can i transform double to int. compiler can transform so it take only 4 and .5 will be thrown.

-> what if we pass type which cannot be transferable to int type like std::string ?

then it will give compiler error. so as developer we should know which type can be transform into which.
*/

#include <iostream>

void print_sum(int a, int b)
{

    int sum = a + b;
    std::cout << "sizeof(a) : " << sizeof(a) << std::endl;
    std::cout << "sizeof(b) : " << sizeof(b) << std::endl;
    std::cout << "sizeof(int) : " << sizeof(int) << std::endl;
    std::cout << "sizeof(double) : " << sizeof(double) << std::endl;
    std::cout << "sum : " << sum << std::endl;
    std::cout << std::endl;
}

int main()
{

    double a{4.5};
    double b{7.8};

    print_sum(a, b);

    return 0;
}