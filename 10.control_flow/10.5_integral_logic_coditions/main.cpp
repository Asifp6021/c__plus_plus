/*
true

Any number different than 0, or expression evaluating to something then other then 0 is true.

false

any number equal to 0, or expression evaluating to 0 is false.
*/

#include <iostream>

int main()
{

    int condition{-5};

    bool bool_condition = condition;
    std::cout << std::boolalpha;

    if (bool_condition)
    {
        std::cout << "We have a " << bool_condition << " in our variable " << std::endl; // different from 0
    }
    else
    {
        std::cout << "We have " << bool_condition << " in our variable" << std::endl; // zero
    }

    return 0;
}