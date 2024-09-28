#include <iostream>

int main()
{
    /*

    initialization using curly base

    // Braced initialization
    // variable may contain random garbage value- warning
    int elephant_count;

    int lion_count{}; // initializes to zero

    int dog_count{15}; // initializes to 15

    int cat_count{10}; // initializes to 10

    // can use expression as initializer
    int domesticated_animals{dog_count + cat_count};

     int narrowing_conversion{2.9}; complier error

     */

    /*

    // function initialization

    int apple_count(5);
    int orange_count(10);
    int fruit_count(apple_count + orange_count);

    // information lost. less safe then the braced initializers.
    int narrowing_conversion_functional(2.9); // 2 output

    */

    // assignment initialization.

    int bike_count = 2;
    int truck_count = 7;
    int vehicle_count = bike_count + truck_count;
    int narrowing_conversion_assignment = 2.9;

    // check the size of the sizeof

    std::cout << "sizeof int : " << sizeof(int) << std::endl;
    std::cout << "sizeof truck_count : " << sizeof(truck_count) << std::endl;
    ;

    return 0;
}

/* note -

 integers are going to be 4 bytes int the memory.

 we can define variables in c++ in 3 way

 1. assignment
 2.curly braces
 3. function assignment

 2.9 is more then the 4 bytes so when c++ will oly take converse it to 2. and it will save it.

using sizeof we can check how much space has integer has grabbed inside the memory.
 */