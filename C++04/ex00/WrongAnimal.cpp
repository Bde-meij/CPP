#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << GREEN << "constructed WrongAnimal" << WHITE <<  std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &WrongAnimal)
{
	std::cout << GREEN << "Copy constructed WrongAnimal" << WHITE <<  std::endl;
	*this = WrongAnimal;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &WrongAnimal)
{
	std::cout << GREEN << "assigned WrongAnimal" << WHITE <<  std::endl;
	this->type = WrongAnimal.type;
	return (*this);
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << RED << "destroyed WrongAnimal" << WHITE <<  std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "generic growling" << std::endl;
}