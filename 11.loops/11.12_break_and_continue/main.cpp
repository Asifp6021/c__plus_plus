/*
continue -> allows to skip a single iteration and move to the next one.

danger of continue loop -> may cause for the incrementing / decrementing statement not to be executed and you'll get an infinite loop.

and be aware when you are using continue keyword with the while loop.

break -> breaks out of the loop immediately and causes execution of the statement following the loop immediately.


*/

#include <iostream>

int main()
{

    /*
    // break and continue : for loops
    const size_t COUNT{20};


    for(size_t i{0} ; i < COUNT ; ++i ){

        if(i==5)
            continue;

        if(i == 11)
            break; // Breaks out of the loop
        std::cout << "i : " << i << std::endl;
    }
    std::cout << "Loop done!" << std::endl;
    */

    // break and continue : while loop
    /*
   size_t i{0};

   while (i < 20){

       if(i==5){
            ++i;
            continue;
       }

     if(i==11)
        break;


        std::cout << "i : " << i << std::endl;
        ++i;

   }
   std::cout << "Loop done!" << std::endl;
   */

    // break and continue : do while loop
    size_t i{0};

    do
    {
        if (i == 5)
        {
            ++i;
            continue;
        }

        if (i == 11)
            break;

        std::cout << "i : " << i << std::endl;
        ++i;

    } while (i < 20);

    return 0;
}