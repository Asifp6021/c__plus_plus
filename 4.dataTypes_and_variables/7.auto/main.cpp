/*
auto lets compiler deduce the type.

auto var1 {12} //we didn't defined any type we used auto so auto will look at the data and try to figure out it's type in this case it is number so it will tell compiler it is number.

auto var2 {13.0} //double
auto var3 {14.0f} //float
auto var4 {13.2l} //long
auto var5 {'e} //char


int modifiers

auto var6 {123u} //unsigned
auto var7 {123ul} //unsigned long
auto var8 {123ll} //long long
*/

#include <iostream>

int main()
{

    auto var1{12};
    auto var2{13.0};
    auto var3{14.0f};
    auto var4{15.0l};
    auto var5{'e'};

    // int modifier suffixes
    auto var6{123u};  // unsigned
    auto var7{123ul}; // unsigned long
    auto var8{123ll}; // long long

    std::cout << "var1 occupies : " << sizeof(var1) << " bytes" << std::endl;
    std::cout << "var2 occupies : " << sizeof(var2) << " bytes" << std::endl;
    std::cout << "var3 occupies : " << sizeof(var3) << " bytes" << std::endl;
    std::cout << "var4 occupies : " << sizeof(var4) << " bytes" << std::endl;
    std::cout << "var5 occupies : " << sizeof(var5) << " bytes" << std::endl;
    std::cout << "var6 occupies : " << sizeof(var6) << " bytes" << std::endl;
    std::cout << "var7 occupies : " << sizeof(var7) << " bytes" << std::endl;
    std::cout << "var8 occupies : " << sizeof(var8) << " bytes" << std::endl;

    return 0;
}