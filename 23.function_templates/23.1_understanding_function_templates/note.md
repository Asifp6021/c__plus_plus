function template helps us to not repeat code. when we use overload function we are repeating logic but passing different types of parameter.

int max(int a, int b) {
return (a>b) ? a : b;
}
int max(double a, double b) {
return (a>b) ? a : b;
}

can you see in function body code(logic) is repeating itself.

we have solution for it that is function template.

note -> function template are not actual c++ code they are just blueprint for the function. c++ compiler after seeing blueprint it will generate actual c++ function to run.

<!-- ------------------------------------------------------------------------------------------- -->

syntax for function template(blueprint)

template <typename T> T maximum(T a, T b)

here T is name of the type.

above in overload function we are passing int and load type parameter to the function.

so if you use function template T will get replace with the type we are passing in argument. so we don't have to repeat the code.

template <typename T>
T max(T a, T b) {
return a>b ? a : b;
}

compiler will create template instance means actual c++ function by which argument we are passing type. and T will get replace by that type.

int x = 12,
int y = 57;
max(x, y)

compiler created instance.

int max(int a, int b) {
return a > b ? a : b;
}

note -> compiler create instance of the only active function. means if you are passing int and double type. so if you are passing int type. it will create int template instance.

after that if you pass double type as argument then previous int type template instance will get destroyed and will be created new template function with double type. this is how there will be repetition.

you can on this website cppinsights.io to see what really happens.
