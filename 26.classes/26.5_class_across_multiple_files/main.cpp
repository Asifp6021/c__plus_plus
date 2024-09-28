/*
we are going to learn in this lecture how can we use classes at multiple file.
*/

#include <iostream>
#include "cylinder.h"
// #include "constants.h";

int main()
{
    Cylinder cylinder1(10, 10);
    std::cout << "volume : " << cylinder1.volume() << std::endl;

    return 0;
}