#include "DiamondTrap.hpp"

void energyCheck()
{
	int i = 0;
	DiamondTrap diam("matt_damond");
	diam.takeDamage(99);
	std::cout << "expected 50 actions " << std::endl;
	while (i < 200)
	{
		diam.attack("whomever");
		i++;
	}
}

int main()
{
	energyCheck();
	std::cout << std::endl;
	DiamondTrap dt("matt_damond");
	std::cout << std::endl;
	dt.attack("ClapTrap");
	dt.takeDamage(0);
	dt.beRepaired(5);
	dt.attack("ClapTrap");
	std::cout << std::endl;
	dt.whoAmI();
	std::cout << std::endl;
	system("leaks -q DiamondClap");
}
