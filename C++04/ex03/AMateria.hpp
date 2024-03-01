#ifndef AMATERIA
#define AMATERIA

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	public:
	AMateria();
	AMateria(const AMateria &materia);
	AMateria(std::string const &type);
	AMateria &operator=(const AMateria &material);
	virtual ~AMateria();

	std::string const &getType() const;
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);

	protected:
	std::string type;
};

#endif