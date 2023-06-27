#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include "colours.hpp"
#include <iostream>

class AAnimal
{
	public:
	virtual void makeSound() const = 0;

	protected:
	AAnimal();
	AAnimal(const AAnimal &Aanimal);
	AAnimal &operator=(const AAnimal &Aanimal);
	virtual std::string getType() const = 0;
	virtual ~AAnimal();
	std::string type;
};

#endif