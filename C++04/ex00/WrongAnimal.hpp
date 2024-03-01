#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "colours.hpp"
#include <iostream>

class WrongAnimal
{
	public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &WrongAnimal);
	WrongAnimal &operator=(const WrongAnimal &WrongAnimal);
	virtual ~WrongAnimal();

	std::string getType() const;
	void makeSound() const;

	protected:
	std::string type;
};

#endif