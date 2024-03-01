#include "Dog.hpp"

Dog::Dog()
{
	this->brain = new Brain;
	AAnimal::type = "dog";
	std::cout << GREEN << "Dog defCon" << WHITE << std::endl;
}

Dog::Dog(const Dog &dog)
{
	std::cout << GREEN << "Dog copCon" << WHITE << std::endl;
	*this = dog;
}

Brain *Dog::getBrain() const
{
	return (this->brain);
}

Dog &Dog::operator=(const Dog &dog)
{
	std::cout << YELLOW << "Dog assOp" << WHITE << std::endl;
	this->brain = new Brain;
	this->type = dog.getType();
    *this->brain = *dog.getBrain();
	return (*this);
}

std::string Dog::getType() const
{
	return (this->type);
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << RED << "Dog Destroyed" << WHITE << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "WoofWoof" << std::endl;
}