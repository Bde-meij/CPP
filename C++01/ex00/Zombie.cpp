#include "Zombie.hpp"

void Zombie::announce()
{
	std::cout << this->name 
	<< ": "
	<< "BraiiiiiiinnnzzzZ..." 
	<< std::endl;
}

Zombie::Zombie(std::string _name) : name(_name)
{
	std::cout << "Zombie " 
	<< _name 
	<< " was created" 
	<< std::endl;
	announce();
}

Zombie::~Zombie()
{
	std::cout << "Zombie " 
	<< this->name 
	<< " was destroyed" 
	<< std::endl;
}