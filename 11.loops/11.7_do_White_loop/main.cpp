/*
do while loop first completes task then runs the test. be aware of this.
*/

#include <iostream>

int main()
{

    // Print I love C++ 10 times
    /*
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    */

    const int COUNT{0};
    size_t i{0}; // Iterator declaration

    do
    {
        std::cout << i << " : I love C++" << std::endl;
        ++i; // Incrementation
    } while (i < COUNT);

    std::cout << "do while Loop done!" << std::endl;

    std::cout << "-------------------------------------" << std::endl;

    // while loops first completes the test and then runs the task. this is the difference between while loop and do while loop

    while (i < COUNT)
    {
        std::cout << i << ": I love C++" << std::endl;
    }

    std::cout << "while loop complete" << std::endl;

    return 0;
}