/*

as we learn if in class there is no constructor then c++ compiler created empty constructor by itself.

Cylinder() {
} <- like this.

then we can create object. )empty constructor do not take any parameters.)

Cylinder cylinder; //object without passing parameter

----------------------------------------------------

 if there is constructor in class then c++ compiler doesn'nt create empty constructor.

 sp then if you have constructor which is not empty then we can't create object which do not take parameter.

 Cylinder cylinder; <- like this// and compiler can't create empty constructor by itself because we already have one with parameter.

 to satisfy compiler we have to pass parameter according to present constructor.
 or create empty constructor by yourself. for that c++ gives simple syntax.

 rather then doing this

 Cylinder() {
}

we can do this

Cylinder() = default;

*/


#include <iostream>

const double PI {3.1415926535897932384626433832795};

class Cylinder {
    public : 
        //Constctors
        Cylinder() = default;
        Cylinder(double rad_param,double height_param){
            base_radius = rad_param;
            height = height_param;
        }
   
        //Functions (methods)
        double volume(){
            return PI * base_radius * base_radius * height;
        }

    private : 
        //Member variables
        double base_radius{1};
        double height{1};
};


int main(){
    Cylinder cylinder1;
    std::cout << "volume : " << cylinder1.volume() << std::endl;
   
    return 0;
}