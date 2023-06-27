#include "Zombie.hpp"

int main()
{
	Zombie shaun("Shaun");
	Zombie *Leon = shaun.newZombie("Leon");
	shaun.randomChump("Chump");
	delete Leon;
}