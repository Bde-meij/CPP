#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public:
		Zombie(std::string _name);
		~Zombie();
		Zombie *newZombie(std::string name);
		void randomChump(std::string name);

	private:
		void announce(void);
		std::string name;
};

#endif