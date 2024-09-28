/*

-> reference

1. Don't have to use any operator dereferencing for reading and writing.

2. can't be changed to reference something else.
3.must be initialized at declaration

-> pointers

1. must go through dereference operator -> * to read/write through pointed to value
2. can be changed to point somewhere else.
3. can be declared un-initialized (will contain garbage addresses)
*/

#include <iostream>

int main()
{

    // Declare pointer and reference

    double double_value{12.34};
    double &ref_double_value{double_value}; // Reference to double_value
    double *p_double_value{&double_value};  // Pointer to double_value

    // Reading
    std::cout << "double_value : " << double_value << std::endl;         // value
    std::cout << "ref_double_value : " << ref_double_value << std::endl; // value
    std::cout << "p_double_value : " << p_double_value << std::endl;     // memory address
    std::cout << "*p_double_value : " << *p_double_value << std::endl;   // value -> most of the developer think that pointer syntax is ugly and they prefer reference over pointer. for reading and writing data.

    // Writting through pointer
    *p_double_value = 15.44;

    std::cout << std::endl;

    std::cout << "p_double_value : " << p_double_value << std::endl;
    std::cout << "*p_double_value : " << *p_double_value << std::endl;

    // Writting through reference
    ref_double_value = 18.44;

    std::cout << std::endl;
    std::cout << "double_value : " << double_value << std::endl;
    std::cout << "ref_double_value : " << ref_double_value << std::endl;

    double some_other_double{78.45};

    // Make the reference reference something else.
    ref_double_value = some_other_double;

    std::cout << "Making the reference reference something else..." << std::endl;
    std::cout << std::endl;
    std::cout << "double_value : " << double_value << std::endl;
    std::cout << "ref_double_value : " << ref_double_value << std::endl;
    std::cout << "p_double_value : " << p_double_value << std::endl;
    std::cout << "*p_double_value : " << *p_double_value << std::endl;

    // Make the pointer point to something else
    p_double_value = &some_other_double;
    std::cout << "Making the pointer point somewhere else..." << std::endl;
    std::cout << std::endl;
    std::cout << "double_value : " << double_value << std::endl;
    std::cout << "ref_double_value : " << ref_double_value << std::endl;
    std::cout << "&double_value : " << &double_value << std::endl;
    std::cout << "&ref_double_value : " << &ref_double_value << std::endl;
    std::cout << "p_double_value : " << p_double_value << std::endl;
    std::cout << "*p_double_value : " << *p_double_value << std::endl;

    *p_double_value = 555.5;

    std::cout << std::endl;
    std::cout << "double_value : " << double_value << std::endl;
    std::cout << "ref_double_value : " << ref_double_value << std::endl;
    std::cout << "&double_value : " << &double_value << std::endl;
    std::cout << "&ref_double_value : " << &ref_double_value << std::endl;
    std::cout << "p_double_value : " << p_double_value << std::endl;
    std::cout << "*p_double_value : " << *p_double_value << std::endl;

    // pointer can point at different memory address as it is pointing at another value
    // reference can't change the address they only point one address and variable.

    return 0;
}