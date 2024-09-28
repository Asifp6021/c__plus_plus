/*
in modern compilers, return by value is commonly optimized out by the compiler when possible and the function is modified behind your back to return by reference. avoiding unnecessary copies.

*/


#include <iostream>


// returning by value adding two number it is not copy.
int sum ( int a , int b){
    int result = a + b; //different memory address
    std::cout << "In : &result(int) :  " << &result << std::endl;
 	return result;
}


// returning by value  adding string means it is copying.
std::string add_strings(std::string str1, std::string str2){
    std::string result =  str1 + str2; //same address coz doing copy compiler optimized it and treated as reference
    std::cout << "In : &result(std::string) :  " << &result << std::endl;
    return result;
}

int main(){

    
    /*
    int x{15};
    int y{9};
    int result = sum(x,y); //different memory address coz not doing any copy
    std::cout << "Out : &result(int) :  " << &result << std::endl;
    std::cout << "result : " << result << std::endl;
    */
 

   
    std::string in_str1{"Hello"};
    std::string in_str2{" World!"};
    std::string result_str = add_strings(in_str1,in_str2); //same address coz doing copy compiler optimized it and treated as reference
    std::cout << "Out : &result_str(std::string) :  " << &result_str << std::endl;
    std::cout << "result_str : " << result_str << std::endl;
  

    return 0;
}