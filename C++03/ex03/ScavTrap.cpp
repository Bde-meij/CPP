#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	ClapTrap::energyPoints = 50;
	std::cout << "Scav Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	ClapTrap::name = name;
	ClapTrap::hitPoints = 100;
	ClapTrap::energyPoints = 50;
	ClapTrap::attackDamage = 20;
	std::cout << "Scav Constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &ct)
{
	*this = ct;
	std::cout << "Scav Copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &st)
{
	this->name = st.name;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scav Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->energyPoints && this->hitPoints)
	{
		this->energyPoints -= 1;
		std::cout << "being a real ScavTrap, "
		<< this->name
		<< " dealt " << this->attackDamage 
		<< " damage to " << target
		<< std::endl;
	}
}

void ScavTrap::guardGate()
{
	if (this->hitPoints > 0)
		std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
