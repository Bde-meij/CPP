#include "Zombie.hpp"

int main()
{
	Zombie	*Horde;

	Horde = zombieHorde(500, "Bob");
	delete[] Horde;
}