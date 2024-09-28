#include <iostream>

int main()
{

    const char *students[]{
        "Daniel Gray",
        "Tuna Philbe",
        "The Rock",
        "Kumar Singh",
        "Sam Ali",
        "Dave Mahoro"}; // data can be modified

    const char *new_student{"Bob the Great"};
    students[0] = new_student; //data can be modified.

    const char const *students2[]{
        "Daniel Gray",
        "Tuna Philbe",
        "The Rock",
        "Kumar Singh",
        "Sam Ali",
        "Dave Mahoro"}; // data can't be modified

    const char *new_student{"Bob the Great"};
    students2[0] = new_student; // Compiler error

    // Print out the students
    std::cout << std::endl;
    std::cout << "Printing out the students : " << std::endl;
    for (const char *student : students)
    {
        std::cout << student << std::endl;
    }

    // *students[0] = 'K';

    // Can swap for new student though.
    const char *new_student{"Bob the Great"};
    students2[0] = new_student; // Compiler error

    // Print out the students
    std::cout << std::endl;
    std::cout << "Printing out the students : " << std::endl;
    for (const char *student : students)
    {
        std::cout << student << std::endl;
    }

    return 0;
}
