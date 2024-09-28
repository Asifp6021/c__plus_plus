/*
we have been using class keyword to create classes but we can also use struct keyword to create classes

but the difference is

class keyword -> member variable are private by default
struct keyword -> member variable are public by default

but you can use public and private keyword to make it public and private while using any of them.

struct is useful when we have only public member variable not have any methods.
*/

#include <iostream>

class Dog{
    public : 
        std::string m_name;
};

struct Cat
{
    public : 
        std::string m_name;
};


struct Point{
    double x;
    double y;
};

void print_point(const Point& point){
    std::cout << "Point [ x: " << point.x << ", y : " << point.y << "]" << std::endl;
}


int main(){
    Dog dog1;
    Cat cat1;

    dog1.m_name = "Fluffy"; // Compiler error
    cat1.m_name = "Juny";
    std::cout << dog1.m_name << std::endl;
    std::cout << cat1.m_name << std::endl;


    Point point1;
    point1.x = 10;
    point1.y = 55.5;

    print_point(point1);

    point1.x = 40.4;
    point1.y = 2.7;
    print_point(point1);

    

   
    return 0;
}