#include "Zombie.hpp"

void Zombie::announce()
{
	std::cout << this->name 
	<< ": "
	<< "BraiiiiiiinnnzzzZ..." 
	<< std::endl;
}

void Zombie::setName(std::string newname)
{
	this->name = newname;
	std::cout << "Zombie " 
	<< this->name
	<< " was created" 
	<< std::endl;
	announce();
}

Zombie::Zombie()
{
	
}

Zombie::~Zombie()
{
	std::cout << "Zombie " 
	<< this->name 
	<< " was destroyed" 
	<< std::endl;
}