#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public:
		Zombie();
		~Zombie();
		void setName(std::string newname);

	private:
		void announce(void);
		std::string name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif