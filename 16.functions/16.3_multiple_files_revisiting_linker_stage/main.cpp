#include <iostream>
#include "compare.h" // Preprocessor
#include "operation.h"

// preprocessor copies declaration and paste into this file. we just have to include the file name where declaration has written.

// and linker going to link all the function definitions. it doesn't matter where they have been defined.

int main()
{

    int maximum = max(134, 56);
    std::cout << "max : " << maximum << std::endl;

    int minimum = min(146, 23);
    std::cout << "min : " << minimum << std::endl;

    int x{4}; // 5
    int y{5}; // 6

    int result = incr_mult(x, y);
    std::cout << "result : " << result << std::endl;

    return 0;
}