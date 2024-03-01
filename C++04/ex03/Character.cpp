#include "Character.hpp"

Character::Character()
{
	// std::cout << "Char defCon" << std::endl;
	this->name = "noname";
	int idx = 0;
	while (idx < 4)
	{
		this->materias[idx] = 0;
		idx++;
	}
}

Character::Character(std::string name)
{
	// std::cout << "Char nameCon" << std::endl;
	this->name = name;
	int idx = 0;
	while (idx < 4)
	{
		this->materias[idx] = 0;
		idx++;
	}
}

Character::Character(const Character &character)
{
	// std::cout << "Char copyCon" << std::endl;
	*this = character;
}

Character &Character::operator=(const Character &character)
{
	// std::cout << "Char assign" << std::endl;
	if (this == &character)
		return (*this);
	this->name = character.getName();
	int idx = 0;
	while (idx < 4)
	{
		this->materias[idx] = character.materias[idx];
		idx++;
	}
	return (*this);
}

Character::~Character()
{
	std::cout << "Char destroy" << std::endl;
}

std::string const &Character::getName() const
{
	// std::cout << "Char get" << std::endl;
	return (this->name);
}

void Character::equip(AMateria* m)
{
	// std::cout << "Char equip" << std::endl;
	int idx = 0;
	while (this->materias[idx] != 0)
		idx++;
	if (idx < 4)
		this->materias[idx] = m;
}

void Character::unequip(int idx)
{
	// std::cout << "Char unequip" << std::endl;
	if ((idx > -1) && (idx < 4))
		this->materias[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
	if (((idx < 0) || (idx > 3)) || \
	(this->materias[idx] == 0))
		return ;
	this->materias[idx]->use(target);
}

void Character::viewInventory()
{
	int idx = 0;
	while (idx < 4)
	{
		if (this->materias[idx])
			std::cout << this->materias[idx]->getType() << std::endl;
		else
			std::cout << "empty" << std::endl;
		idx++;
	}
	std::cout << std::endl;
}