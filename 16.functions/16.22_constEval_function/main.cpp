// const eval introduced in 2020. it gives guarantee that it will 100% ge compile at compile time. if not it will give compiler error.

#include <iostream>

// Evaluate this function at compile time. If you can't
// do that throw a compiler error
consteval int get_value(int multiplier)
{
    return 3 * multiplier;
}

int main()
{

    int result = get_value(4);

    int some_var{5};
    // result = get_value(some_var); //compiler error

    return 0;
}