#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "" << std::endl;
}

Animal::Animal(Animal const &)
{
	std::cout << "" << std::endl;
}

// Animal &Animal::operator=(Animal const &)
// {
// 	std::cout << "" << std::endl;
// }

Animal::~Animal()
{
	std::cout << "" << std::endl;
}

void Animal::run(int distance)
{
	std::cout << "" << std::endl;
}

void Animal::eat(int kilograms)
{
	std::cout << "then " << this->name << " ate " 
	<< kilograms << " kilograms of premium quality meat" 
	<< std::endl;
}
