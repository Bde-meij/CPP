#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	WrongAnimal::type = "WrongCat";
	std::cout << GREEN << "constructed WrongCat" << WHITE << std::endl;
}

WrongCat::WrongCat(const WrongAnimal &WrongCat)
{
	*this = WrongCat;
	std::cout << GREEN << "Copy constructed WrongCat" << WHITE << std::endl;
}

WrongCat &WrongCat::operator=(const WrongAnimal &WrongCat)
{
	std::cout << GREEN << "assigned WrongCat" << WHITE << std::endl;
	this->type = WrongCat.getType();
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << RED << "destroyed WrongCat" << WHITE << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "MeOow" << std::endl;
}