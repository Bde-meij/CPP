#include "Cat.hpp"

Cat::Cat()
{
	this->brain = new Brain;
	Animal::type = "cat";
	std::cout << GREEN << "Cat defCon" << WHITE << std::endl;
}

Cat::Cat(const Animal &cat)
{
	std::cout << GREEN << "Cat copCon" << WHITE << std::endl;
	*this = cat;
}

Cat &Cat::operator=(const Animal &cat)
{
	std::cout << YELLOW << "Cat assOp" << WHITE << std::endl;
	this->type = cat.getType();
	return (*this);
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << RED << "Cat Destroyed" << WHITE << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "MeoOow" << std::endl;
}