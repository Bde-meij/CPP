#include "Cat.hpp"

Cat::Cat(std::string name)
{
	Animal::name = name;
	std::cout << "one day " << Animal::name 
	<< " was born" << std::endl;
}

Cat::Cat(Cat const &)
{
	std::cout << "" << std::endl;
}

// Cat &Cat::operator=(Cat const &)
// {
// 	std::cout << "" << std::endl;
// }

Cat::~Cat()
{
	std::cout << "" << std::endl;
}

void Cat::scorn(std::string const & target)
{
	std::cout << Animal::name << " scorned " 
	<< target << std::endl;
}
