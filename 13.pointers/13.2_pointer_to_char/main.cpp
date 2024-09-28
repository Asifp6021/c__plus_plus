#include <iostream>

int main()
{

    const char *message{"Hello World!"}; // when we use pointers this character will turn into array.

    std::cout << "message : " << message << std::endl;

    //*message = "B"; // Compiler error
    std::cout << "*message : " << *message << std::endl;

    // Allow users to modify the string
    char message1[]{"Hello World!"};
    message1[0] = 'B';
    std::cout << "message1 : " << message1 << std::endl;

    return 0;
}