constructor is a window to customize how our own class objects are put together.

<!-- -------------------------------------------------------------------------- -->

class Cylinder {
private:
double base_radius{1};
double hight {1}

public :
Cylinder() = default;
Cylinder(double rad_param, double height_param);
}

Cylinder() = default;
Cylinder(double rad_param, double height_param); <- when we define two constructor one default and another with parameter then compiler get confuse as to what to use. so define constructor as per the logic.

 <!-- ------------------------------------------------------------------------------------ -->

Cylinder(double rad_param, double height_param = 5);
Cylinder c1(4);
std::cout << "volume : " << c1.volume() << std::endl;

here is I passed default value for the second parameter in the constructor.
and c1(4) <- it will be taken as first argument for the rad_param and it will work.

 <!-- ------------------------------------------------------------------------------------ -->

Cylinder(double rad_param = 5, double height_param);
Cylinder c1(4);
std::cout << "volume : " << c1.volume() << std::endl;

here is I passed default value for the first parameter in the constructor.
and c1(4) <- we are thinking that this 4 value will be taken as argument for the second parameter height_param.

but it is not going to work it will give compiler error.
