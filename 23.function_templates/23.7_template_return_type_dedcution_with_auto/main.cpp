/*
in previous lecture we are passing typename for return type.

now we can also use auto.

suppose we have

T <- int
p <- double.

return type will be double because double size is larger then int.

so yes this is the rule that whichever type will be largest that is going to be return type.

and function definition should be before function call; as we learn before.
*/

#include <iostream>

template <typename T, typename P>
auto maximum(T a, P b)
{
    return (a > b) ? a : b;
}

int main()
{

    // Largest type is going to be deduced as return type

    auto max1 = maximum('e', 33); // double return type deduced
    std::cout << "max1 : " << max1 << std::endl;
    std::cout << "size of max1 : " << sizeof(max1) << std::endl;

    return 0;
}