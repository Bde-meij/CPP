#include "Ice.hpp"

Ice::Ice()
{
	// std::cout << "Ice defcon" << std::endl;
	this->type = "ice";
}

Ice::Ice(const Ice &ice)
{
	// std::cout << "Ice copycon" << std::endl;
	*this = ice;
}

Ice::Ice(std::string const & type)
{
	this->type = type;
}

Ice &Ice::operator=(const Ice &material)
{
	// std::cout << "Ice assign" << std::endl;
	this->type = material.getType();
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Ice destroyed" << std::endl;
}

AMateria *Ice::clone() const
{
	// std::cout << "Ice clone" << std::endl;
	return (new Ice);
}

void Ice::use(ICharacter &target)
{
	std::cout 
	<< "* shoots an iceball at " 
	<< target.getName()
	<< " *"
	<< std::endl;
}