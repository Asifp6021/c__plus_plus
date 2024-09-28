#include <iostream>

int main()
{

    /*
    for (size_t i{0}, x{5}, y{22}; y > 15; ++i, x += 5, y -= 1)
       {
           std::cout << "i: " << i << ", x : " << x << ", y : " << y << std::endl;
       }
       */

// exercise uppercase character
    unsigned int count{98};

    for (size_t i{65}; i <= count; ++i)
    {

        char uppercase_character = static_cast<char>(i);

        std::cout << uppercase_character;
    }

    return 0;
}