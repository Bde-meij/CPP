#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
	WrongCat();
	WrongCat(const WrongAnimal &WrongCat);
	WrongCat &operator=(const WrongAnimal &WrongCat);
	~WrongCat();

	void makeSound() const;
};

#endif