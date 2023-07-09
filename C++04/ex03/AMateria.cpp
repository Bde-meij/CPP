#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "defCon AMateria" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
	std::cout << "copCon AMateria" << std::endl;
	this->type = type;
}

AMateria &AMateria::operator=(const AMateria &material)
{
	std::cout << "assign AMateria" << std::endl;
	this->type = material.type;
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "destruct AMateria" << std::endl;
}

std::string const &AMateria::getType() const
{
	return (this->type);
}

// AMateria *AMateria::clone() const = 0
// {
// 	return (new AMateria(this->type));
// }

// virtual void use(ICharacter &target)
// {
// 	std::cout << "defCon AMateria" < std::endl;
// }
