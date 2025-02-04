/*
A mechanism under which a function repeatedly calls itself to achieve some goal. A function does recursion is called a recursion function.
*/

#include <iostream>

size_t sum_up_to_zero(size_t value){
    if(value!=0)
        return value + sum_up_to_zero(value-1);
    return 0;
}

int main(){

    std::cout << "result : " << sum_up_to_zero(10) << std::endl;
   
    return 0;
}