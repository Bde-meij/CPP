#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
	Cat();
	Cat(const Animal &cat);
	Cat &operator=(const Animal &cat);
	~Cat();

	void makeSound() const;

	private:
	Brain *brain;
};

#endif