#include <iostream>


int main(){

    int scores[] {1,2,3,4,5,6,7,8,9,10};
    
    //Printing positions
    std::cout << std::endl;
	
	std::cout << "Scores : ";
    for ( auto score : scores){
        std::cout << " " << score ;
    }
	std::cout << std::endl;

	// auto score <- it is variable for range loop but it is not accessing the original array it is copying original array if you want to change original array with this you can't change.

// ---------------------------------------------------

// that s why used reference as we learn when we use reference we have access to original values and variables so we can change it 
   for ( auto& score : scores){
        score = score * 10;
    }

    //Printing after change
     std::cout << std::endl;
	std::cout << "Scores : ";
    for ( auto score : scores){
        std::cout << " " << score ;
    }
	std::cout << std::endl;
    
    return 0;
}