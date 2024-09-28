/*
double sum (const double (&scores)[10]);

when we pass sized array by reference and if we define the size of the array. then compiler going to enforce the array and it's size.

for example above we have scores reference array with size 10.

so we can not pass element less then 10 or more then 10 otherwise compiler throw error.
it needs to be 10 element.


reference meas we are pointing to original variable which can be modified by the reference.

that is why we can use std::size() and for range loop. which we restricted to use with raw array.

that is why we are not passing second parameter for size.

compare raw array and reference array as parameter.
*/

#include <iostream>

//Declaration
double sum( const double (&scores) [10]);


int main(){

    double student_scores[] {10.0,20.0,30.0,40.0,50.0,60.0,70.0,80.0,90.0,1}; 
    
    double sum_result = sum(student_scores);
	
    std::cout << "result is : " << sum_result << std::endl;
   
    return 0;
}

//Definition
double sum( const double (&scores) [10]){
    double sum{};
    for(size_t i{}; i < std::size(scores) ; ++i){
        sum  += scores[i];
    }
    return sum;
}
