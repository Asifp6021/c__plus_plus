#include <iostream>

int main()
{

    int value{5};

    // increment by one
    value = value + 1; // 6
    std::cout << "The value is : " << value << std::endl;

    value = 5; // reset value to 5
    value = value - 1;
    std::cout << "the value is : " << value << std::endl;

    //--------------------------------------------------------

    // postfix increment and decrement

    std::cout << "======= postfix increment and decrement ========" << std::endl;

    // reset value to 5
    value = 5;

    std::cout << "The value is (incrementing) : " << value++ << std::endl; // 5

    // after incrementing 6
    std::cout << "The value is  : " << value << std::endl; // 6

    // decrement with postfix
    value = 5;

    std::cout << "The value is decrementing : " << value-- << std::endl;
    std::cout << "The value is : " << value << std::endl;

    //--------------------------------------------------------

    // prefix increment and decrement

    std::cout << "======= prefix increment and decrement ========" << std::endl;

    // reset value to 5
    value = 5;

    std::cout << "The value is  : " << ++value << std::endl; // 6

    // decrement with prefix
    value = 5;

    std::cout << "The value is : " << --value << std::endl; // 4

    return 0;
}

/*
    it can only increment or decrement by 1.
*/