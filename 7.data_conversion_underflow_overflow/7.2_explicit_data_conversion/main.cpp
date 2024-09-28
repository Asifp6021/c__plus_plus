#include <iostream>

int main()
{

    // implicit cast will add to the doubles. then turn result into int for assignment.
    double x{12.5};
    double y{34.6};

    // 12.5 + 34.6 = 47.1

    int sum = x + y; // 47 coz compiler turn it into int that is conversion.

    std::cout << "sum: " << sum << std::endl;

    // explicitly cast : cast then sum up
    sum = static_cast<int>(x) + static_cast<int>(y);

    std::cout << "sum: " << sum << std::endl;

    // explicitly cast : cast then sum up -> another way to explicit return you can use any of it
    sum = static_cast<int>(x + y);

    std::cout << "sum: " << sum << std::endl;

    // old c way to cast <- do not c cast way use c++ casting way
    double PI{3.14};

    int int_pi = (int)(PI);
    std::cout << "PI: " << PI << std::endl;

    std::cout << "int_pi: " << int_pi << std::endl;

    return 0;
}