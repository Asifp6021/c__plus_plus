/*
it is important if you want to build any application then it is more useful so learn it how to generate random number in c++;

std::rand <- generates a number between 0 to RAND_MAX

std:;rand has problem it gives same random numbers if you run program again again

1st time 2 7 12
2nd time 2 7 12

we have to use seed to say std::rand to give different random number.

for seed we have to use
std::srand(std::time(0)); <- have to add at the start of the file.

cpprefrence.com
*/

#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{

	std::srand(std::time(0)); // Seed

	/*
	int random_num = std::rand();

	std::cout << "random_num : " << random_num << std::endl; // 0 ~ RAND_MAX

	random_num = std::rand();
	std::cout << "random_num : " << random_num << std::endl; // 0 ~ RAND_MAX
	*/

	// Generate random numbers in a loop
	/*
	int random_num;

	for(size_t i {0} ; i < 20 ; ++i){
		random_num = std::rand();
		std::cout << "random_num " << i << ":" <<  random_num << std::endl; // 0 ~ RAND_MAX
	}
	*/

	// Generate a range between 0 and 10
	/*
	int random_num =  std::rand() % 11;                  // [ 0 ~10]

	for(size_t i {0} ; i < 20 ; ++i){
		random_num = std::rand() % 11;
		std::cout << "random_num " << i << "  :   " <<  random_num << std::endl; // 0 ~ RAND_MAX
	}
	*/

	int random_num = std::rand() % 10 + 1; // [1~10]
	for (size_t i{0}; i < 20; ++i)
	{
		random_num = std::rand() % 10 + 1;
		std::cout << "random_num " << i << "  :   " << random_num << std::endl; // 0 ~ RAND_MAX
	}

	return 0;
}