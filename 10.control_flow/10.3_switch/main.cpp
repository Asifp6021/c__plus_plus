/*

Break

the break statement after each case is very important. it stops processing the switch block when a successful case has been found. i f the break statement is not there. all the cases following the current case will be executed.

integral types and enum: int, long, unsigned short, etc.

what you pass as condition for switch it should be integral type. it should not be string because it do not make any sense.

*/

#include <iostream>
#include <string>

// Tools
const int Pen{10};
const int Marker{20};
const int Eraser{30};
const int Rectangle{40};
const int Circle{50};
const int Ellipse{60};

int main()
{

	int tool{Eraser};

	switch (tool)
	{
	case Pen:
	{
		std::cout << "Active tool is Pen" << std::endl;
	}
	break;

	case Marker:
	{
		std::cout << "Active tool is Marker" << std::endl;
	}
	break;

	case Eraser:
	case Rectangle:
	case Circle:
	{
		std::cout << "Drawing Shapes" << std::endl;
	}
	break;

	case Ellipse:
	{
		std::cout << "Active tool is Ellipse" << std::endl;
	}
	break;

	default:
	{
		std::cout << "No match found" << std::endl;
	}
	break;
	}

	std::cout << "Moving on" << std::endl;

	/*
	// Condition can only be integer of enum (We'll learn about enums later in the course)
	std::string name {"John"};
	switch (name) // Compiler error!
	{

	}
	*/

	return 0;
}

