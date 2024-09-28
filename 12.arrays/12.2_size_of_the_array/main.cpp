/*
if we have array and size is not declared and we are using for loop to print all the array but how can you do it because if you use for loop you need size for the test. so that's why c++ standard library provides function size using it we can know the size of the array at runtime.

note -> using for loop range you can print data which is present inside the array even if size is not declared. see previous chapter.

try to use range based for loop coz it is easy
*/

#include <iostream>

int main()
{

    int scores[]{1, 2, 5};

    int count{std::size(scores)}; // std::size( C++17)

    std::cout << "sizeof(scores) : " << sizeof(scores) << std::endl;
    std::cout << "sizeof(scores[0]) : " << sizeof(scores[0]) << std::endl;
    std::cout << "count : " << count << std::endl;

    /*
    int count {sizeof(scores)/sizeof(scores[0])}; //size function introduced in c++2017 before that programmer used to use this technique to know the size of the array. use brain and understand what  sizeof does .


    for(size_t i {0} ; i < count ; ++i){
        std::cout << "scores [" << i << "] : " << scores[i] << std::endl;
    }


   //Range based for loop
    for ( auto i : scores){
            std::cout << "value  : " << i << std::endl;
    }
    */

    return 0;
}