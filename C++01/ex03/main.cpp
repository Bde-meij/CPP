#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

void	main2()
{
	HumanB jim("Jim");
	jim.attack();
	Weapon yoyo("vicious yoyo");
	jim.setWeapon(yoyo);
	jim.attack();
	std::cout << "end of main2" << std::endl << std::endl;
}

int main()
{
	main2();
	Weapon club = Weapon("club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("taser");
	bob.attack();
	club = Weapon("shotgun");
	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.setType("brick");
	jim.attack();

	std::cout << "end of mainmain" << std::endl << std::endl;
	system("leaks -q NecessaryViolence");
}
