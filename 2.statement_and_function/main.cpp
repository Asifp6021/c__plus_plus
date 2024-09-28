#include <iostream>

int addNumbers(int first_param, int second_param)
{
    int result = first_param + second_param;
    return result;
}

int main()
{

    int first_number{3}; // statement and 3 initial value ic c++ use {} for initial value
    int second_number{7};

    std::cout << "first number : " << first_number << std::endl;
    std::cout << "second_number : " << second_number << std::endl;

    int sum = first_number + second_number;
    std::cout << "Sum : " << sum << std::endl;

    sum = addNumbers(25, 5);
    std::cout << "Sum : " << sum << std::endl;

    sum = addNumbers(30, 30);
    std::cout << "Sum : " << sum << std::endl;

    std::cout << "Sum : " << addNumbers(10, 20) << std::endl;

    return 0;
}

/* https://www.learncpp.com/cpp-tutorial/statements-and-the-structure-of-a-program/

https://www.learncpp.com/cpp-tutorial/introduction-to-functions/

https://www.learncpp.com/cpp-tutorial/function-return-values-value-returning-functions/

*/
