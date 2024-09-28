// suppose you have default parameter. and you have set function overloading.
//  and you are calling function so compiler will get confuse which default parameter he should use.
//  solution do not declare overloading or remove default parameter from one of the overloading. or explicitly tell compiler what you want to use.

#include <iostream>

// Declarations
void print_age(int age = 33);

void print_age(long int age = 44);

int main()
{

    print_age();

    return 0;
}

// Definitions
void print_age(int age)
{
    std::cout << "Your age is( int version)  : " << age << std::endl;
}

void print_age(long int age)
{
    std::cout << "Your age is (long int version) : " << age << std::endl;
}