#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	int i;
	Zombie *Horde;

	try
	{
		Horde = new Zombie[N];
	}
	catch (const std::bad_alloc &e)
	{
		std::cout << "mem allocation has failed on "
		<< &e
		<< std::endl;
		exit(1);
	}
	i = 0;
	while (i < N)
	{
		Horde[i].setName(name);
		i++;
	}
	return (Horde);
}
