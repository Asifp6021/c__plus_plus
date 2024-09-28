#include <iostream>

// we are going to see how std::cout can slow down program.

#include <iostream>

int main()
{

    for (size_t i{0}; i < 100000; ++i)
    {
        // std::cout << "i : " << i << std::endl; //std::cout takes lot of time to print data on the terminal so be aware while using it.
    }
    std::cout << "Done!" << std::endl;

    size_t i{0}; // Iterator

    while (i < 100000)
    {
        // std::cout << "i : " << i << std::endl;
        ++i;
    }
    std::cout << "Done!" << std::endl;

    return 0;
}