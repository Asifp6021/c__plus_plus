#include <iostream>
#include <cstring>

template <typename T>
T maximum(T a, T b)
{
    return (a > b) ? a : b;
} // when i am using this template for type const *char pointer to lexiographically print larget string. it is not working properly because it is comparing memory address not string. that is why I need logic which can achieve my desire output. who will compare string. not address. so that is why i used template specialization which we work only for specific type that we have defined. we can write our logic according to it see below

// template specialization
template <>
const char *maximum<const char *>(const char *a, const char *b)
{
    return (std::strcmp(a, b) > 0) ? a : b;
}

int main()
{

    /*
    int a{10};
    int b{23};
    double c{34.7};
    double d{23.4};
    std::string e{"hello"};
    std::string f{"world"};

    auto max_int = maximum(a,b); // int type deduced
    auto max_double = maximum(c,d);// double type deduced
    auto max_str = maximum(e,f) ;// string type deduced

    std::cout << "max_int : " << max_int << std::endl;
    std::cout << "max_double : " << max_double << std::endl;
    std::cout << "max_str : " << max_str << std::endl;
    */

    //
    const char *g{"wild"};
    const char *h{"animal"};

    // This won't do what you would expect : BEWARE!

    

    const char *result = maximum(g, h);
    std::cout << "max(const char*) : " << result << std::endl;

    return 0;
}