#include "Dog.hpp"

Dog::Dog()
{
	Animal::type = "dog";
	std::cout << GREEN << "Dog defCon" << WHITE << std::endl;
}

Dog::Dog(const Animal &dog)
{
	std::cout << GREEN << "Dog copCon" << WHITE << std::endl;
	*this = dog;
}

Dog &Dog::operator=(const Animal &dog)
{
	std::cout << YELLOW << "Dog assOp" << WHITE << std::endl;
	this->type = dog.getType();
	return (*this);
}

Dog::~Dog()
{
	std::cout << RED << "Dog Destroyed" << WHITE << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "WoofWoof" << std::endl;
}