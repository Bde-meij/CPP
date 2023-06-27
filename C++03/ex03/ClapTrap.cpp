#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Clap Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : hitPoints(10), energyPoints(10), attackDamage(0)
{
	this->name = name;
	std::cout << "Clap Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ct)
{
	*this = ct;
	std::cout << "Clap Copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ct)
{
	this->name = ct.name;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Clap Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->energyPoints && this->hitPoints)
	{
		this->energyPoints -= 1;
		std::cout << this->name
		<< " dealt " << this->attackDamage 
		<< " damage to " << target
		<< std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints > amount)
	{
		this->hitPoints -= amount;
		std::cout << this->name
		<< " took " << amount << " damage"
		<< std::endl;
	}
	else
	{
		this->hitPoints = 0;
		std::cout << this->name
		<< " died! "
		<< std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints && this->hitPoints)
	{
		this->energyPoints -= 1;
		this->hitPoints += amount;
		std::cout << this->name
		<< " repaired " << amount << " damage"
		<< std::endl;
	}
}
