#include "Cure.hpp"

Cure::Cure()
{
	// std::cout << "Cure defcon" << std::endl;
	this->type = "cure";
}

Cure::Cure(const Cure &cure)
{
	// std::cout << "Cure copycon" << std::endl;
	*this = cure;
}

Cure::Cure(std::string const &type)
{
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
	// std::cout << "Cure destroyed" << std::endl;
}

AMateria *Cure::clone() const
{
	// std::cout << "Cure clone" << std::endl;
	return (new Cure);
}