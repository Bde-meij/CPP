#pragma once

#include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
	Character();
	Character(std::string name);
	Character(const Character &character);
	Character &operator=(const Character &character);
	~Character();
	std::string const & getName() const;
	AMateria getMateria(int idx);
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, Character& target);

	private:
	std::string name;
	AMateria materias[4];
};

// The Character possesses an inventory of 4 slots, which means 4 Materias at most.
// The inventory is empty at construction. They equip the Materias in the first empty slot
// they find. This means, in this order: from slot 0 to slot 3. In case they try to add
// a Materia to a full inventory, or use/unequip an unexisting Materia, don’t do anything
// (but still, bugs are forbidden). The unequip() member function must NOT delete the
// Materia!