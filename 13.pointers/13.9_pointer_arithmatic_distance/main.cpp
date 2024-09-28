/*
distance between elements

-> subtracting two pointers, result i an integer, representing in some way the number of elements between the two pointers.


c++ has special type to store the pointer differences. the reason is that pointer has different different representation on the different system and compiler. there should be consist way to show difference between pointer.

c++ developer don't have to care about how each platform represent pointers whether it is compiler of system.
*/

#include <iostream>

int main()
{

    int scores[10]{11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    // Array index notation
    //     int * pointer1 {&scores[0]};
    //     int * pointer2 {&scores[8]};

    // Pointer arithmetic notation
    int *pointer1{scores + 0};
    int *pointer2{scores + 8};

    std::cout << "pointer2 - pointer1 : " << pointer2 - pointer1 << std::endl; // 8
    std::cout << "pointer1 - pointer2 : " << pointer1 - pointer2 << std::endl; // -8

    //--------------------------------------------------

    // special type std::ptrdiff

    std::ptrdiff_t pos_diff = pointer2 - pointer1;
    std::ptrdiff_t neg_diff = pointer1 - pointer2;
    std::cout << "pointer2 - pointer1 : " << pos_diff << std::endl; // 8
    std::cout << "pointer1 - pointer2 : " << neg_diff << std::endl; // -8
    std::cout << "sizeof(std::ptrdiff_t) : " << sizeof(std::ptrdiff_t) << std::endl;

    return 0;
}