#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal *meta = new Animal();
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();
	const WrongAnimal *wrongcat = new WrongCat();
	meta->makeSound();
	dog->makeSound();
	cat->makeSound();
	wrongcat->makeSound();

	delete meta;
	delete dog;
	delete cat;
	delete wrongcat;
}