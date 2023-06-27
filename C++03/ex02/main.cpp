#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

void energyCheck()
{
	int i = 0;

	ClapTrap Clapi("Clapi");
	std::cout << "Clap energy check, expect 10 actions:" << std::endl;
	while (i < 100)
	{
		Clapi.attack("ScavTrap");
		i++;
	}
	i = 0;
	ScavTrap Scavi("Scavi");
	std::cout << "Scav energy check, expect 50 actions:" << std::endl;
	while (i < 100)
	{
		Scavi.attack("ClapTrap");
		i++;
	}
	i = 0;
	FragTrap Fragi("Fragi");
	std::cout << "Scav energy check, expect 100 actions:" << std::endl;
	while (i < 200)
	{
		Fragi.attack("ScavTrap");
		i++;
	}
}

int main()
{
	energyCheck();
	ClapTrap ct("Claptrap");
	ct.attack("ScavTrap");
	ct.takeDamage(0);
	ct.beRepaired(5);
	ct.attack("ScavTrap");
	// st.guardGate();

	ScavTrap st("ScavTrap");
	st.attack("ClapTrap");
	st.takeDamage(0);
	st.beRepaired(5);
	st.attack("ClapTrap");
	st.guardGate();
	// ft.highFivesGuys();

	FragTrap ft("FragTrap");
	ft.attack("ScavTrap");
	ft.takeDamage(0);
	ft.beRepaired(5);
	ft.attack("ScavTrap");
	ft.highFivesGuys();
	system("leaks -q FragScavClap");
}
