#pragma once

#include <iostream>

class AMateria
{
	public:
	AMateria();
	AMateria(const AMateria &aMateria);
	AMateria(std::string const & type);
	AMateria &operator=(const AMateria &material);
	~AMateria();

	std::string const &getType() const;
	virtual AMateria *clone() const = 0;
	// virtual void use(ICharacter &target);

	protected:
	std::string type;
};

// Implement the Materias concrete classes Ice and Cure. Use their name in lowercase 
//("ice" for Ice, "cure" for Cure) to set their types.

// clone() will return a new instance of the same type (i.e., if you clone an Ice Materia,
// you will get a new Ice Materia).

// The use(ICharacter&) member function will display:
// • Ice: "* shoots an ice bolt at <name> *"
// • Cure: "* heals <name>’s wounds *"