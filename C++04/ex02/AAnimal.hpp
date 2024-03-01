#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include "colours.hpp"
#include <iostream>

class AAnimal
{
	public:
	AAnimal();
	virtual ~AAnimal();
	AAnimal(const AAnimal &Aanimal);
	virtual void makeSound() const = 0;
	virtual std::string getType() const = 0;
	AAnimal &operator=(const AAnimal &Aanimal);

	protected:
	std::string type;
};

#endif