/*

int array1 [] {1, 2, 3, 4, 5};
int array2 [] {6, 7, 8, 9, 10};

suppose we want to swap these both array into each other how can we do that ?

we can use third temporary variable temp

arr1 -> temp
arr2 -> arr1
temp -> arr1

we can do this using loop but it is not good way.

1. to much looping around.
2. to much copying of data.
3. the workload increase with the number of elements in arrays.
4. for loop is not good way to swap array what if there is thousands of element in array then it will consume lot of cpu power and memory.

---------------------------------------------------------------------------------------------------------

but as we learn that

int arr3 [] {1, 2, 3, 4, 5};

int *p_var {arr3} <- this pointer points out the first element of the array

1.the name of ht array can be treated as a pointer to the first element of the array.

2. we can't change where the array name pints though.

*/

// ---------------------------------------------------------------------------------------------------------

#include <iostream>

int main()
{

    int arr0[5]{1, 2, 3, 4, 5};
    int arr1[5]{6, 7, 8, 9, 10};

    // ---------------------------------------------------------------------------------------------------------

    // Swapping data the hard way
    /*
    int temp[5];

    //Move data from arr1 into temp
    for (size_t i{ 0 }; i < std::size(arr1); ++i) {
        temp[i] = arr1[i];
    }

    //Move data from arr0 to arr1
    for (size_t i{ 0 }; i < std::size(arr0); ++i) {
        arr1[i] = arr0[i];
    }

    //Move data temp to arr0
    for (size_t i{}; i < std::size(temp); ++i) {
        arr0[i] = temp[i];
    }
    */

    // ---------------------------------------------------------------------------------------------------------
    /*

     int * temp{nullptr};

     temp = arr1; // we cannot do this like this coz we cannot assign array to any variable. it's like changing the name of the array that is not allowed
     arr1 = arr0;
     */

    // ---------------------------------------------------------------------------------------------------------

    // this is the best way to swap array

    int *temp{nullptr};
    int *p_arr1{arr1}; // use pointer to point at arr1
    int *p_arr0{arr0}; // use pointer to point at arr0

    // now we can swap pointers
    temp = p_arr1;
    p_arr1 = p_arr0;
    p_arr0 = temp;

    // Print arr0
    std::cout << "arr0 : ";
    for (size_t i{}; i < std::size(arr0); ++i)
    {
        std::cout << p_arr0[i] << " ";
    }
    std::cout << std::endl;

    // Print arr1
    std::cout << "arr1 : ";
    for (size_t i{}; i < std::size(arr1); ++i)
    {
        std::cout << p_arr1[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}