#include "Animal.hpp"

Animal::Animal()
{
	std::cout << GREEN << "Animal defCon" << WHITE <<  std::endl;
}

Animal::Animal(const Animal &animal)
{
	std::cout << GREEN << "Animal copCon" << WHITE <<  std::endl;
	*this = animal;
}

Animal &Animal::operator=(const Animal &animal)
{
	std::cout << YELLOW << "Animal assOp" << WHITE <<  std::endl;
	this->type = animal.type;
	return (*this);
}

std::string Animal::getType() const
{
	return (this->type);
}

Animal::~Animal()
{
	std::cout << RED << "Animal destroyed" << WHITE <<  std::endl;
}

void Animal::makeSound() const
{
	std::cout << "generic growling" << std::endl;
}