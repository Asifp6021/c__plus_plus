// we cannot change the data and even we can't point at other address

#include <iostream>

int dog_count{2};

void say_age(const int* const age); // Declaration

int main(){

    int age{23}; // Local
    std::cout << "age (before call) : " << age << "&age : " << &age << std::endl; //23
    say_age(&age); // Argument
    std::cout << "age (after call) : " << age << "&age : " << &age <<  std::endl; //23

    return 0;
}


void say_age(const int* const age){ // Parameter
    //++(*age); //
    std::cout <<  "Hello , you are " << *age << " years old! &age : " << &age <<  std::endl;//24
    //age = & dog_count;
}
