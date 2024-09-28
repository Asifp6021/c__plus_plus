/*
structure binding is simple technique to access member variable using simple c++ syntax.

Note -> and structural binding only works when members are public otherwise won't work.

*/

#include <iostream>

class Point
{
public:
    double x;
    double y;
};

void print_point(const Point p)
{
    std::cout << "Point [ x : " << p.x << ", y : " << p.y << "]" << std::endl;
}

int main()
{

    Point point1;

    point1.x = 5;
    point1.y = 6;

    print_point(point1);

    auto [a, b] = point1; // <- structural binding it copies value of x and y member variable. so it's copy

    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;

    point1.x = 44.1;
    point1.y = 55.2;

    print_point(point1);

    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;

    // we can use with lambda function it is possible in c++20.
    auto func = [=]()
    {
        std::cout << "a (captured) : " << a << std::endl;
        std::cout << "b (captured) : " << b << std::endl;
    };
    func();

    return 0;
}