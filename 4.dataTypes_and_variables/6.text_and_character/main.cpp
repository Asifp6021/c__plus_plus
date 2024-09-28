#include <iostream>

int main()
{

    char character1{'a'};
    char character2{'b'};
    char character3{'c'};
    char character4{'d'};
    char character5{'e'};

    std::cout << character1 << std::endl;
    std::cout << character2 << std::endl;
    std::cout << character3 << std::endl;
    std::cout << character4 << std::endl;
    std::cout << character5 << std::endl;

    std::cout << std::endl;

    char value = 65; // ASCII code 'A' for 65

    std::cout << "value : " << value << std::endl;

    std::cout << "value(int) : " << static_cast<int>(value) << std::endl;

    return 0;
}

/*

char takes 1 bit means 8 bytes in memory.

if you declare number using char then c++ will treat as char and give output according to ascii code.

static_cast<int> if we use this it will treat as number
*/