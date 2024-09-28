#include <iostream>

const int val1{33};
constexpr int val2{34};
int val3{35};

constinit int age = 80;

const constinit int age1{val1}; // const and constinit can be combined.

constinit int age2{age1}; // initializing with age would lead to a compiler error -> age is not const

// constinit int age3 {val3} //error: val3 is evaluated at run time -> can't const initialize age3

const constinit double weight{33.33};

// constexpr constinit double scale_factor{33.33}; //can't combine constexpr and constinit

int main()
{
    // constinit double height{1.72};

    std::cout << "age : " << age << std::endl;
    std::cout << "age1 : " << age1 << std::endl;
    std::cout << "age2 : " << age2 << std::endl;

    age = 33; // Can change a const init variable
    std::cout << "age : " << age << std::endl;

    // Combining const and constinit
    std::cout << "weight : " << weight << std::endl;
    // weight = 44.44; // Compiler error
    return 0;
}

// we can't use constinit inside the main function because constinit mean to be solve problem which at global level which comes before main function