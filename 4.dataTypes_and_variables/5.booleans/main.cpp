
#include <iostream>

int main()
{
    bool red_light{false};
    bool green_light{true};

    if (red_light == true)
    {
        std::cout << "stop! " << std::endl;
    }
    else
    {
        std::cout << "Go through! " << std::endl;
    }

    std::cout << "sizeof(bool): " << sizeof(bool) << std::endl;

    // it will print 0 and 1 coz red_light false means 0 and green_light true means 1
    std::cout << "red_light : " << red_light << std::endl;
    std::cout << "green_light : " << green_light << std::endl;

    // if we use boolalpha then it will give true and false at the place of 0 and 1

    std::cout << std::boolalpha;
    std::cout << "red_light : " << red_light << std::endl;
    std::cout << "green_light : " << green_light << std::endl;

    return 0;
}

/*
booleans takes 1 bytes in memory.

we use bool type to define the booleans.

we use boolean to make decisions.

*/