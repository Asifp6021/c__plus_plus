classes are mechanism in c++ to build our own class.

we have been using only int double such as fundamental classes. see below.

unsigned int age{44};
double score{55.5};

suppose we want to build our own type which models person.

person define by the age, name,address and want to model person in program and want to use them as players.

we are going to use cylinder for example. and cylinder has radius and height.

and we are going to do with classes.

<!-- ---------------------------------------------------------------------------- -->

syntax of the classes.

class Cylinder <- name of the class {
public:
double base_radius {1.0}; <- member variable(properties).
double height {1.0} <- member variable(properties)

public :
double volume() {
return PI _ base_radius _ base_radius \* height;
} <- behavior or method (function) which performs task using member variable(properties)
}

public keyword <- this is saying that class we have defined it's member variable(properties) are accessible outside of the class.

note -> member variables (properties) of the class is private by default.

if it is private it can't be accessible outside of the function.

<!-- ---------------------------------------------------------------------------- -->

1. members can be raw stack variables. pointer or references. we'll see in upcoming chapters.

2. classes have functions (methods) that let them do things

3. class methods have access to the member variable, regardless of whether they are public or private.

4. private members of classes (variables and function) aren't accessible from the outside of the class definition.

<!-- -------------------------------------------------------------------- -->

syntax for the class remember

1. member means variables. private by default. can make public using public keyword.

2. methods. by which class can perform action on the member variable. private by default. can make public using public keyword.

3. constructor to create object by the compiler.
