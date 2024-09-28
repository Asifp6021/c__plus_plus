/*
constructor are called in exact order like dog1, dog2, dog3, dog4

destructor are called in reverse order like dog4, dog3, dog2, dog1 because it makes easy to optimize memory for the compiler and it's deletes the last one immediately created
*/

#include <iostream>
#include <string_view>

class Dog
{
public:
	Dog() = default;
	Dog(std::string_view name_param, std::string_view breed_param, int age_param);
	~Dog();

private:
	std::string name;
	std::string breed;
	int *p_age{nullptr};
};
Dog::Dog(std::string_view name_param, std::string_view breed_param, int age_param)
{
	name = name_param;
	breed = breed_param;
	p_age = new int;
	*p_age = age_param;
	std::cout << "Dog constructor called for " << name << std::endl;
}

Dog::~Dog()
{
	delete p_age;
	std::cout << "Dog destructor called for : " << name << std::endl;
}