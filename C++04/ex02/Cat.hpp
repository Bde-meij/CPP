#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public virtual AAnimal
{
	public:
	Cat();
	Cat(const Cat &cat);
	Cat &operator=(const Cat &cat);
	~Cat();

	std::string getType() const;
	Brain *getBrain() const;
	void makeSound() const;

	private:
	Brain *brain;
};

#endif