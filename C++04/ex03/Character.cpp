#include "Character"

Character::Character()
{
	// std::cout << "Char con" << std::endl;
	this->name = "noname";
	while (i < 4)
	{
		this->materias[i] = NULL;
		i++;
	}
}

Character::Character(std::string name)
{
	// std::cout << "Char con" << std::endl;
	this->name = name;
	while (i < 4)
	{
		this->materias[i] = NULL;
		i++;
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
	this->name = character.getName();
	int idx = 0;
	while (i < 4)
	{
		this->materias[idx] = NULL;
		if (character.getMateria(idx) != NULL)
			this->materias[idx] = character.getMateria(i);
		idx++;
	}
	return (*this);
}

Character::~Character()
{
	// std::cout << "Char destroy" << std::endl;
}

std::string const &Character::getName() const
{
	// std::cout << "Char get" << std::endl;
	return (this->name);
}

AMateria Character::getMateria(int idx)
{
	if ((0 <= idx) && (idx < 4))
		return (this->materias[idx]);
	return (NULL);
}

void Character::equip(AMateria* m)
{
	// std::cout << "Char equip" << std::endl;
	int idx = 0;
	while (this.getMateria(idx) != NULL)
		idx++;
	if (idx < 4)
		this.materias[idx] = m;
}

void Character::unequip(int idx)
{
	// std::cout << "Char unequip" << std::endl;
	if (idx < 4)
		this->materias[idx] = NULL;
}

void Character::use(int idx, Character& target)
{
	std::cout
	<< this->name
	<< " uses ";
	if (this->materias[idx])
		std::cout << this->materias[idx];
	else
		std::cout << "nothing";
	std::cout 
	<< " on "
	<< target.getName()
	<< std::endl;
}
