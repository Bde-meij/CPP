#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
	Dog();
	Dog(const Animal &dog);
	Dog &operator=(const Animal &dog);
	~Dog();

	void makeSound() const;

	private:
	Brain *brain;
};

#endif