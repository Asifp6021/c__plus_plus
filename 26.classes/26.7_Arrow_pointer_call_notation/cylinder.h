#ifndef CYLINDER_H
#define CYLINDER_H

#include "constants.h"
class Cylinder
{
public:
    // Constctors
    Cylinder() = default;
    Cylinder(double rad_param, double height_param);
    // Functions (methods)
    double volume();

    // Setter and getter methods
    double get_base_radius();
    double get_height();

    void set_base_radius(double rad_param);

    void set_height(double height_param);

private:
    // Member variables
    double base_radius{1};
    double height{1};
};

#endif

// if you have put all the definition in separate file and also you have put definition in header file then it will create duplication so compiler will get confuse and throws compiler error. keep mind in this and do not like this.