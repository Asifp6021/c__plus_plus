/*

if constexpr fails at compile time then it is not going to be turn into binary it is immediately eliminated by the compiler this is the best thing

*/

#include <iostream>

int main()
{

    constexpr bool condition{false};

    if constexpr (condition)
    {
        std::cout << "Condition is true" << std::endl;
    }
    else
    {
        std::cout << "Condition is false" << std::endl;
    }
    return 0;
}