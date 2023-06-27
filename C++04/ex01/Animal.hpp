#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "colours.hpp"
#include <iostream>

class Animal
{
	public:
	Animal();
	Animal(const Animal &animal);
	Animal &operator=(const Animal &animal);
	virtual ~Animal();

	std::string getType() const;
	virtual void makeSound() const;

	protected:
	std::string type;
};

#endif