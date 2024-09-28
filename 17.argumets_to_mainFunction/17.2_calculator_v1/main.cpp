#include <iostream>

int main()
{

    double first_number{5.0};
    double second_number{33.1};
    char c{'+'};

    switch (c)
    {
    case '+':
        std::cout << first_number << " + " << second_number << " = "
                  << first_number + second_number << std::endl;
        break;

    case '-':
        std::cout << first_number << " - " << second_number << "="
                  << first_number - second_number << std::endl;
        break;

    case 'x':
        std::cout << first_number << " * " << second_number << " = "
                  << first_number * second_number << std::endl;
        break;

    case '/':
        std::cout << first_number << " / " << second_number << " = "
                  << first_number / second_number << std::endl;
        break;
    }
    return 0;
}

// inside the case there is '-' subtraction it is going to perform only subtraction. if i want to perform addition then i have to make changes in code and have to recompile it then it will perform addition. so it's kind of useless we are having recompile it for every changes