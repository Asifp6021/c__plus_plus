/*
1. Output parameters should be passed in such a way that you can modify the arguments from inside the function. Options are passing by reference or by pointer. references are preferred in c++.

2. Input parameter shouldn't be modifiable from inside a function the function really need to get input (read) from the argument. You enforce modification restrictions with the const keyword. Options are passing by const references passing by pointer to const. or even passing by const pointer to const.
*/

#include <iostream>
#include <string>

void max_str(const std::string input1, const std::string input2,
             std::string &output)
{
    if (input1 > input2)
    {
        output = input1;
    }
    else
    {
        output = input2;
    }
}

void max_int(int input1, int input2, int &output)
{
    if (input1 > input2)
    {
        output = input1;
    }
    else
    {
        output = input2;
    }
}

void max_double(double input1, double input2, double *output)
{
    if (input1 > input2)
    {
        *output = input1;
    }
    else
    {
        *output = input2;
    }
}

int main()
{

    /*
    std::string out_str;
    std::string string1("Cassablanca");
    std::string string2("Bellevue");

    max_str(string1,string2,out_str);
    std::cout << "max_str : " << out_str << std::endl;
    */

    /*
     int out_int;
     int in1{45};
     int in2{723};
     max_int(in1,in2,out_int);
     std::cout << "max_int : " << out_int << std::endl;
     */

    double out_double;
    double in_double1{45.8};
    double in_double2{76.9};
    max_double(in_double1, in_double2, &out_double);
    std::cout << "max_double : " << out_double << std::endl;

    return 0;
}