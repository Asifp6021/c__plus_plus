/*
when you work with array character.

char message[] {'h', 'e', 'l', 'l', 'o'}

if we print it using for loop there will be no garbage value. ut

if you print this array using std::cout there weill be garbage value included.

<- when array ends still compiler can add garbage character to avoid that you have to add '\0' at the end means compiler will understand it is the end of the array.


'\0' <- we call it c string character and null terminator.

char message[] {'h', 'e', 'l', 'l', 'o', '\0'}; <- you have to add c string at the end because when you use single quote c++ will add garbage character at the end.

so recommended to use double quote to declare array character. then we don't have to add c string at the end. we call it string literal

*/

#include <iostream>


int main(){

	//Declare array
    char message [5]  {"Hello"};
    //int data[5] {1,2,3,3,3};

    //std::cout << "data : " << data << std::endl;
    
  
    //Print out the array through looping
    /*
    std::cout << "message : ";
    for( auto c : message){
        std::cout << c ;
    }
    std::cout << std::endl;
    */

    
   /*
    //Change characters in our array
    message[1] = 'a';

    //Print out the array through looping
    std::cout << "message : ";
    for( auto c : message){
        std::cout << c ;
    }
    std::cout << std::endl;
    */

   
   
    // Will probably print garbage after your char array
    /*
    std::cout << "message : " << message << std::endl;
    */
   

 
    //If a character array is null terminated, it's called as C-String
    /*
    char message1 [] {'H','e','l','l','o','\0'};
    std::cout << "message1 : " << message1 << std::endl;
    std::cout << "sizeof(message1) : " << sizeof(message1) << std::endl;
    */

  
   /*
    char message2 [6] {'H','e','l','l','o'};
    std::cout << "message2 : " << message2 << std::endl;
    std::cout << "sizeof(message2) : " << sizeof(message2) << std::endl;

    char message3 [] {'H','e','l','l','o'}; // This is not a c string ,
											//as there is not null character
    std::cout << "message3 : " << message3 << std::endl;
    std::cout << "sizeof(message3) : " << sizeof(message3) << std::endl;
    */

    

    //String literal
    /*
    char message4 [] {"Hello"};
    std::cout << "message4 : " << message4 << std::endl;
    std::cout << "sizeof(message4) : " << sizeof(message4) << std::endl;
    */



    //Can't safely print out arrays other than those of characters
    int numbers [] {1,2,3,4,5};
    std::cout << "numbers :  " << numbers << std::endl;
 

    
    return 0;
}