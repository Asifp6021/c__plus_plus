#include <iostream>

int main()
{
    constexpr int eye_count{2};

    constexpr double PI{3.14};
    constexpr int SOME_LIB_MAJOR_VERSION{123};

    // eye_count = 5 // constexpr is also constant

    int leg_count{2}; // none constexpr -> leg_count is not known at compile time.

    // constexpr int arm_count{leg_count} // error

    const int my_count{5};
    constexpr int your_count{my_count * 5}; // we can use const with constexpr

    constexpr int table_count{5};
    constexpr int door_count{table_count}; // we can use constexpr with constexpr

    std::cout
        << "eye count: " << eye_count << std::endl;
    std::cout << "PI: " << PI << std::endl;

    // checking at compile time.
    static_assert(SOME_LIB_MAJOR_VERSION == 123);

    std::cout << "App doing its thing... " << std::endl;

    return 0;
}