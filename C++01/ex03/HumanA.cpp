#include "HumanA.hpp"

void HumanA::attack()
{
	std::cout << this->name
	<< " attacks with their "
	<< this->_weapon->getType()
	<< std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon)
{
	this->name = name;
	this->_weapon = &weapon;
}

HumanA::~HumanA()
{
	// std::cout << "A destroyed" << std::endl;
}
