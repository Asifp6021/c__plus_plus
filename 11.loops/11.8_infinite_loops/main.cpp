/*
infinite loops occur by error an may cause your program to do crazy things. Watch out for this!

Sometimes they are just part of your design especially when you don't know how many times your loop will execute, when that's determined by the user for example. We'll see an example about that in the next lecture.

*/

#include <iostream>

int main()
{

    // Infinite loop : for loop
    /*
    for(size_t i{};true ; ++i){
        std::cout << i <<  " : I love C++" << std::endl;
    }
    */

    // Infinite loop : while loop
    /*
    size_t i{0};

    while(true){
        std::cout << i  << " : I love C++" << std::endl;
        ++i;
    }
    */

    // Infinite loop : do while loop

    size_t i{0};

    do
    {
        std::cout << i << " : I love C++" << std::endl;
        ++i;
    } while (true);

    return 0;
}