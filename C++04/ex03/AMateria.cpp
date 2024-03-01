#include "AMateria.hpp"

AMateria::AMateria()
{
	
	// std::cout << "defCon AMateria" << std::endl;
}

AMateria::AMateria(const AMateria &materia)
{
	*this = materia;
}

AMateria::AMateria(std::string const & type)
{
	// std::cout << "copCon AMateria" << std::endl;
	this->type = type;
}

AMateria &AMateria::operator=(const AMateria &material)
{
	// std::cout << "assign AMateria" << std::endl;
	this->type = material.getType();
	return (*this);
}

AMateria::~AMateria()
{
	// std::cout << "destruct AMateria" << std::endl;
}

const std::string &AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter &target)
{
	(void) target;
}
