#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &dt);
		DiamondTrap &operator=(const DiamondTrap &dt);
		~DiamondTrap();
		void attack(const std::string& target);
		void whoAmI();
	private:
		std::string name;
};

#endif