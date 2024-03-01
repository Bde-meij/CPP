#include "HumanB.hpp"

void HumanB::attack()
{
	std::cout << this->name
	<< " attacks with their ";
	if (this->_weapon)
		std::cout << this->_weapon->getType();
	else
		std::cout << "fists";
	std::cout << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

HumanB::HumanB(std::string name)
{
	this->_weapon = NULL;
	this->name = name;
}

HumanB::~HumanB()
{
	// std::cout << "B destroyed" << std::endl;
}
