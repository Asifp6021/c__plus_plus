/*
set and get are the methods to read or modify member variable of a class.

private variable member of the class is not accessible outside of the class.

so using setter and getter methods we can access private members because setter and getter methods are inside class so they have access to private member. but remember it creates copy of the original member they do not directly have access original member.

and setter and getter public so it is accessible outside of the class.
*/

#include <iostream>

const double PI{3.1415926535897932384626433832795};

class Cylinder
{

private:
    // Member variables
    double base_radius{1};
    double height{1};

public:
    // Constctors
    Cylinder() = default;
    Cylinder(double rad_param, double height_param)
    {
        base_radius = rad_param;
        height = height_param;
    }
    // Functions (methods)
    double volume()
    {
        return PI * base_radius * base_radius * height;
    }

    // Setter and getter methods
    double get_base_radius()
    {
        return base_radius;
    }
    double get_height()
    {
        return height;
    }

    void set_base_radius(double rad_param)
    {
        base_radius = rad_param;
    }

    void set_height(double height_param)
    {
        height = height_param;
    }
};

int main()
{
    Cylinder cylinder1(10, 10);
    std::cout << "volume : " << cylinder1.volume() << std::endl;

    // Modify our object
    cylinder1.set_base_radius(100);
    cylinder1.set_height(10);

    std::cout << "volume : " << cylinder1.volume() << std::endl;

    return 0;
}