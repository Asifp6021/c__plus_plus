/*
decltype auto is allowed to remove duplication.

but if you use that we can't separate function into declaration and definition.
*/

#include <iostream>

template <typename T, typename P> 
decltype(auto) maximum(T a, P b){
    return (a > b) ? a : b;
}


int main(){
    int x{7};
    double y{45.9};

    auto result = maximum(x,y);
    std::cout << "max : " << result << std::endl;
    std::cout << "sizeof(result) : " << sizeof(result) << std::endl;
   
    return 0;
}