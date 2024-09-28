/*


double sum (double scores[]; size_t count);

double scores [] <- first parameter

size_t count <- second parameter we have to pass it to know the size of the scores array.

note -;

double scores [] <- first parameter when we pass scores[]array as parameter that scores array becomes pointer. and all the data size will be equal to what is the pointer size on the system.

and we can not use std::size();
*/

#include <iostream>
#include <array>


//double sum( double scores[], size_t count){
double sum (double* scores , size_t count){

    double score_sum{};

   // std::cout << "sizeof(scores)  : " << sizeof(scores) << std::endl;
   // std::cout << "sizeof(int*) : " << sizeof (int *) << std::endl;
   //size_t arr_size = std::size(scores);

   for(size_t i{0} ; i < count ; ++i){
       score_sum += scores[i];
   }
    return score_sum;
}



int main(){
    double my_scores[]{10.5,34.3,4.8,6.5};
    //std::cout << "sizeof(my_scores) : " << sizeof(my_scores) << std::endl;
   

   double result = sum(my_scores,std::size(my_scores));
   std::cout << "result : " << result << std::endl;
 
    return 0;
}