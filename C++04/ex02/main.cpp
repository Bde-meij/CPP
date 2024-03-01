#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	int i = 0;

	// Cat mauw;
	// mauw.makeSound();
	// AAnimal ani(mauw);
	// AAnimal annnie;

	AAnimal *ani = new Cat();
	// ani->makeSound();
	// delete ani;

// 	Cat *cats[10];
// 	Dog *dogs[10];
// 	while (i < 10)
// 	{
// 		cats[i] = new Cat();
// 		dogs[i] = new Dog();
// 		i++;
// 	}
// 	i = 0;
// 	while (i < 10)
// 	{
// 		delete cats[i];
// 		delete dogs[i];
// 		i++;
// 	}
// 	system("leaks -q AbstractAnimal");
}