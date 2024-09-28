/*
1. A region in your code where a variable name can be mentioned you may be reading from it. writing into it basically using it in any conceivable way.

2. Trying to use a variable out of it's scope will result in a compiler error.

*/

#include <iostream>

int global_var{50}; // global variable we can use it anywhere

void some_function()
{
	std::cout << "inside some_function global_var" << global_var << std::endl;

	// std::cout << 'inside some_function local_var1' << local_var1 << std::endl; //local_var1 but not accessible out of it's function block
}

int main()

{

	std::cout << "inside main function global_var" << global_var << std::endl;

	int local_var1{57}; // this variable only accessible within this function because it is within the fuction block so it is local or block variable.

	std::cout << "inside main_function variable" << local_var1 << std::endl; // local_var1 it is accessible within it's function block

	return 0;
}
