#include <iostream>

int main()
{

	unsigned int yearIs;

	std::cout << "Enter a year : ";

	std::cin >> yearIs;

	/// checking wether year leap year or not.

	/*
	// using nesting if conditions
		if (yearIs % 4 == 0)
		{

			if (yearIs % 100 == 0)
			{

				if (yearIs % 400 == 0)
				{
					std::cout << "year " << yearIs << " is a leap year" << std::endl;
				}
				else
				{
					std::cout << "year " << yearIs << " is not a leap year" << std::endl;
				}
			}
			else
			{
				std::cout << "year " << yearIs << " is a leap year" << std::endl;
			}
		}
		else
		{
			std::cout << "year " << yearIs << " is not a leap year" << std::endl;
		}

	*/

	// using else if better way

	if (yearIs % 4 == 0 && yearIs % 100 != 0)
	{
		std::cout << "year " << yearIs << " is a leap year" << std::endl;
	}
	else if (yearIs % 100 == 0 && yearIs % 400 == 0)
	{
		std::cout << "year " << yearIs << " is a leap year" << std::endl;
	}
	else
	{
		std::cout << "year " << yearIs << " is not a leap year" << std::endl;
	}

	return 0;
}