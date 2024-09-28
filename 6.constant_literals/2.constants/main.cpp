#include <iostream>

int main()
{
    const int age{34};

    const float height{1.80f};

    // age = 55; // can't modify

    // height = 1.8

    std::cout
        << "age: " << age << std::endl;
    std::cout
        << "age: " << height << std::endl;

    return 0;
}