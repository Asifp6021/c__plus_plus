#ifndef CONSTANTS_H
#define CONSTANTS_H

const double PI{3.1415926535897932384626433832795};

#endif

/*

#ifndef CONSTANTS_H
#define CONSTANTS_H

we have

#include "constants.h" <- inside the cylinder file

#include "constants.h" <- inside the main.cpp file


here what happening we need pI value in cylinder.h file because we need it there. it makes sense to include in this file.

but we are again included it in main.ccp file. but there is no need of this pI. that is why preprocessor adding this to main file two times which creating compiler error.



#ifndef CONSTANTS_H
#define CONSTANTS_H

so this is preprocessor  language we is checking is it pi file included. if included it will not include it at unnecessary place.

*/