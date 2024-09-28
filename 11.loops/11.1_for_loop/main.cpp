#include <iostream>

/* 
pillars of the any loop

iterator
starting point
test(controls when the loop stops)
increment(decrement)
loop body
*/

int main()
{

    // Print I love C++ 10 times : The bad way
    /*
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    */

    // for loop : the good way
    /*
   for( unsigned int i{0} ; i < 10000 ;++i){
       //Whatever we want the loop to run
       std::cout << i <<  " : I love C++" << std::endl;
   }
   std::cout << "Loop done!" << std::endl;
   */

    // Use size_t : a representation of some unsigned int for positive numbers [sizes]
    /*
    for(size_t i{0} ; i < 10 ; ++i){
        std::cout << i << " : I love C++" << std::endl;
    }
    std::cout << "Loop done!" << std::endl;
    */
    /*
    //sizeof(size_t)
    std::cout << "sizeof(size_t) : " << sizeof(size_t) << std::endl;
    */

    // Scope of the iterator
    /*
    for(size_t i{0} ; i < 10 ; ++i){
        std::cout << i << " : I love C++" << std::endl;
    }
    std::cout << "Loop done!" << std::endl;
    // std::cout << "i : " << i << std::endl;Compiler error : i is not in scope
    */

    // Iterator declared outside the loop
    /*
     size_t i{0}; // Iterator defined outside

     for(i ; i < 10 ; ++i){
         std::cout << i << " : I love C++" << std::endl;
     }
     std::cout << "Loop done!" << std::endl;
     std::cout << "i : " << i << std::endl;
     */

    // Leave out the iterator declaration part
    /*
    size_t i{0}; // Iterator defined outside

    for(  ; i < 10 ; ++i){
        std::cout << i << " : I love C++" << std::endl;
    }
    std::cout << "Loop done!" << std::endl;
    std::cout << "i : " << i << std::endl;
    */

    // Don't hard code values : BAD!

    /*const size_t COUNT{100};

    for(size_t i{0} ; i < COUNT ; ++i){
        std::cout << i << " : I love C++" << std::endl;
    }
    std::cout << "Loop done!" << std::endl;

    */

    // exercise sum till 99
    unsigned int sum{0};

    const size_t count{99};

    for (size_t i{0}; i < count; ++i)
    {

        sum = sum + i;
    }
    std::cout << "sum is: " << sum << std::endl;

    return 0;
}
