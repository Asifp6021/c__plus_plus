#include <iostream>
#include <string>

int main()
{
    /*
    // printing data
    std::cout << "Hello C++20" << std::endl;

    int age{21};
    std::cout << "Age : " << age << std::endl;

    // prints error message
    std::cerr << "Error message : Something is wrong" << std::endl;

    // prints log
    std::clog << "Log message : Something happened" << std::endl;

    */

    /*
        // std:;cin takes input from the user
        int age1;
        std::string name;

        std::cout << "please type your name and age : " << std::endl;

        std::cin >> name;
        std::cin >> age1;

        std::cout << "Hello " << name << " you are " << age1 << " years old!" << std::endl;

        */

    int age;
    std::string full_name;

    std::cout << "Please type in your full name and age " << std::endl;

    std::getline(std::cin, full_name);

    std::cin >> age;

    std::cout << "Hello " << full_name << " you are " << age << " years old!" << std::endl;

    return 0;
}
