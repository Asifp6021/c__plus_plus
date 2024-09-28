/*
reference is an alias variable that we can use to reference to original variable. and we can referenced variable the way we can use original variable.

*/

#include <iostream>

int main()
{

    int int_data{33};
    double double_data{55};

    // References
    int &ref_int_data{int_data};
    double &ref_double_data{double_data};

    // Print stuff out
    std::cout << "int_data : " << int_data << std::endl;
    std::cout << "&int_data : " << &int_data << std::endl;
    std::cout << "double_data : " << double_data << std::endl;
    std::cout << "&double_data : " << &double_data << std::endl;

    std::cout << "=======================" << std::endl;

    std::cout << "ref_int_data : " << ref_int_data << std::endl;
    std::cout << "&ref_int_data : " << &ref_int_data << std::endl;
    std::cout << "ref_double_data : " << ref_double_data << std::endl;
    std::cout << "&ref_double_data : " << &ref_double_data << std::endl;

    int_data = 111;
    double_data = 67.2;

    // Print stuff out
    std::cout << std::endl;
    std::cout << "int_data : " << int_data << std::endl;
    std::cout << "&int_data : " << &int_data << std::endl;
    std::cout << "double_data : " << double_data << std::endl;
    std::cout << "&double_data : " << &double_data << std::endl;

    std::cout << "=======================" << std::endl;

    std::cout << "ref_int_data : " << ref_int_data << std::endl;
    std::cout << "&ref_int_data : " << &ref_int_data << std::endl;
    std::cout << "ref_double_data : " << ref_double_data << std::endl;
    std::cout << "&ref_double_data : " << &ref_double_data << std::endl;

    // changing original variable data with reference variable
    ref_int_data = 1012;
    ref_double_data = 1000.45;

    // Print stuff out
    std::cout << std::endl;
    std::cout << "int_data : " << int_data << std::endl;
    std::cout << "&int_data : " << &int_data << std::endl;
    std::cout << "double_data : " << double_data << std::endl;
    std::cout << "&double_data : " << &double_data << std::endl;

    std::cout << "=======================" << std::endl;

    std::cout << "ref_int_data : " << ref_int_data << std::endl;
    std::cout << "&ref_int_data : " << &ref_int_data << std::endl;
    std::cout << "ref_double_data : " << ref_double_data << std::endl;
    std::cout << "&ref_double_data : " << &ref_double_data << std::endl;

    return 0;
}