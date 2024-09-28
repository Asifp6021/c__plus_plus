#include <iostream>

const double *find_max_address(const double scores[], size_t count);

int main()
{

    double array[]{1.0, 2.0, 3.0, 45.0, 5.0, 6.0, 7.0, 8.0, 79.0, 10.0};
    const double *p_max = find_max_address(array, std::size(array));
    std::cout << "max : " << *p_max << std::endl;

    return 0;
}

const double *find_max_address(const double scores[], size_t count)
{

    size_t max_index{};
    double max{};

    for (size_t i{0}; i < count; ++i)
    {
        if (scores[i] > max)
        {
            max = scores[i];
            max_index = i;
        }
    }
    return &scores[max_index];
}

/*

In C++, when you pass an array into a function, what actually gets passed is a pointer to the first element of the array. This pointer allows you to access elements of the array within the function. However, the array itself (in this case, scores) is not a local variable of the function; it's the pointer to the array that is local.

Why It Works Correctly:
Lifetime of scores Array: The scores array itself is not a local variable of the function find_max_address. Instead, it is passed by reference (as a pointer to its first element) into the function. Arrays in C++ are often passed this way, and their lifetime is managed outside of the function.
*/