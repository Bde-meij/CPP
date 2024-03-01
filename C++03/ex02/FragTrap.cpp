#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Default Frag Constructed" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	ClapTrap::name = name;
	ClapTrap::hitPoints = 100;
	ClapTrap::energyPoints = 100;
	ClapTrap::attackDamage = 30;
	std::cout << "Frag Constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &ft)
{
	*this = ft;
	std::cout << "Frag Copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &ft)
{
	this->name = ft.name;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "Frag Destructor called" << std::endl;
}

void FragTrap::highFivesGuys()
{
	if (this->energyPoints && this->hitPoints)
	{
		std::cout << "FragTrap tries to high-five with everyone" << std::endl
		<< "present. However, others try to avoid him." << std::endl
		<< "If only Fragtrap weren't so needy.." << std::endl;
	}
}
