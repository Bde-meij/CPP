#include "Cure.hpp"

Cure::Cure()
{
	// std::cout << "Cure defCon" << std::endl;
	this->type = "cure";
}

Cure::Cure(const Cure &cure)
{
	// std::cout << "Cure copyCon" << std::endl;
	*this = cure;
}

Cure::Cure(std::string const &type)
{
	// std::cout << "Cure typeCon" << std::endl;
	this->type = type;
}

Cure &Cure::operator=(const Cure &material)
{
	// std::cout << "Cure assign" << std::endl;
	this->type = material.getType();
	return (*this);
}

Cure::~Cure()
{
	std::cout << "Cure destroyed" << std::endl;
}

AMateria *Cure::clone() const
{
	// std::cout << "Cure clone" << std::endl;
	return (new Cure);
}

void Cure::use(ICharacter &target)
{
	std::cout 
	<< "* heals " 
	<< target.getName()
	<< "'s wounds *"
	<< std::endl;
}