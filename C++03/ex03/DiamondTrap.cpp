#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "Diamond Default Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
	this->name = name;
	ClapTrap::name = name.append("_clap_name");
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << "Diamond Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &dt)
{
	*this = dt;
	std::cout << "Diamond Copy constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &dt)
{
	this->name = dt.name;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Diamond Destructor called" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	if (this->energyPoints && this->hitPoints)
	{
		std::cout << "am I " << this->name << "?" << std::endl;
		std::cout << "or am I " << ClapTrap::name << "?" << std::endl;
		std::cout << "maybe both...." << std::endl;
	}
}
