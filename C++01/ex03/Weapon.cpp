#include "Weapon.hpp"

std::string const &Weapon::getType()
{
	return ((this->type));
}

void Weapon::setType(std::string newType)
{
	this->type = newType;
}

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::~Weapon()
{
	// std::cout << this->type << "Wep destroyed" << std::endl;
}