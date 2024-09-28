/*
let the compiler deduce the return type of a function, judging from return statements in the function.



*/

#include <iostream>

// The right way : return type deduction
/*
auto process_number(int value){
	if(value < 10){
		return 22; // returning int literal
	}else{
		return 55; // returning int literal
	}
}
*/

auto process_number(int value)
{
	if (value < 10)
	{
		return static_cast<double>(22); // returning int literal
	}
	else
	{
		return 33.1; // returning double literal
	}
} // compiler is confuse he is not getting what to do coz we are returning int and double. so we cast int into double so now we are consistent.

// or at the auto return we could have used int or double. coze compiler can implicitly convert int to double. double to int.

int main()
{

	auto result = process_number(17);
	std::cout << "result : " << result << std::endl;
	std::cout << "sizeof(result)  : " << sizeof(result) << std::endl;
	std::cout << "sizeof(int) : " << sizeof(int) << std::endl;
	std::cout << "sizeof(double) : " << sizeof(double) << std::endl;

	return 0;
}