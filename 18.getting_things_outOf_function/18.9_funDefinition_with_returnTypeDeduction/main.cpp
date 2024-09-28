#include <iostream>

/*
if you are doing auto deduction while separating function into declaration and definition. then you have to put definition before you are calling the function. other wise compiler will throw error.

coz compiler don't know that what return type is.

*/

// Definition
auto max(int &a, int &b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b; // Will return a copy.
	}
}

int main()
{

	int x{5};
	int y{9};

	int int_val = max(x, y);

	return 0;
}