#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public virtual AAnimal
{
	public:
	Dog();
	Dog(const Dog &dog);
	Dog &operator=(const Dog &dog);
	~Dog();

	std::string getType() const;
	Brain *getBrain() const;
	void makeSound() const;

	private:
	Brain *brain;
};

#endif