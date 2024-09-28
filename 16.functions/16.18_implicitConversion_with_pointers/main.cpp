/*
pointer do not support implicit conversion with type.

if compiler allows then it will mess up with pointer arithmetic logic.
*/

#include <iostream>

void print_sum(int* param1, int* param2){
	std::cout << "sum : " << (*param1 + *param2) << std::endl;
}

int main(){

    int a{3};
    int b{12};

    print_sum(&a,&b);
   
    return 0;
}