#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

// void energyCheck()
// {
// 	int i = 0;

// 	ClapTrap Clapi("ClapTrap");
// 	std::cout << "Clap energy check, expect 10 actions:" << std::endl;
// 	while (i < 100)
// 	{
// 		Clapi.attack("ScavTrap");
// 		i++;
// 	}
// 	i = 0;
// 	ScavTrap Scavi("ScavTrap");
// 	std::cout << "Scav energy check, expect 50 actions:" << std::endl;
// 	while (i < 100)
// 	{
// 		Scavi.attack("ClapTrap");
// 		i++;
// 	}
// }

int main()
{
	// energyCheck();
	// ClapTrap ct("Claptrap");
	// ct.attack("ScavTrap");
	// ct.takeDamage(0);
	// ct.beRepaired(5);
	// ct.attack("ScavTrap");
	// ct.guardGate();

	ScavTrap st("Scavvie");
	st.attack("ClapTrap");
	st.takeDamage(100);
	st.beRepaired(5);
	st.attack("ClapTrap");
	st.guardGate();
	system("leaks -q ScavClap");
}
