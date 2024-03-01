#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << GREEN << "AAnimal defCon" << WHITE <<  std::endl;
}

AAnimal::AAnimal(const AAnimal &Aanimal)
{
	std::cout << GREEN << "AAnimal copCon" << WHITE <<  std::endl;
	*this = Aanimal;
}

AAnimal &AAnimal::operator=(const AAnimal &Aanimal)
{
	std::cout << YELLOW << "AAnimal assOp" << WHITE <<  std::endl;
	this->type = Aanimal.getType();
	return (*this);
}

std::string AAnimal::getType() const
{
	return (this->type);
}

AAnimal::~AAnimal()
{
	std::cout << RED << "AAnimal destroyed" << WHITE <<  std::endl;
}

void AAnimal::makeSound() const
{
	std::cout << "generic growling" << std::endl;
}