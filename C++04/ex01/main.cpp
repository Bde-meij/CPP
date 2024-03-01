#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	// int i = 0;
	// Animal *animalArr[10];

	// while (i < 10)
	// {
	// 	animalArr[i] = new Cat();
	// 	animalArr[i + 1] = new Dog();
	// 	i += 2;
	// }

	Dog someDog;
	someDog.getBrain()->setIdeas("I'm dog!");
	Dog deepDog = someDog;
	std::cout << deepDog.getBrain() << " " << deepDog.getBrain()->getIdeas()[1] << std::endl;
	std::cout << someDog.getBrain() << " " << someDog.getBrain()->getIdeas()[1] << std::endl;

	Cat someCat;
	someCat.getBrain()->setIdeas("I'm Cat!");
	Cat deepCat = someCat;
	std::cout << deepCat.getBrain() << " " << deepCat.getBrain()->getIdeas()[1] << std::endl;
	std::cout << someCat.getBrain() << " " << someCat.getBrain()->getIdeas()[1] << std::endl;

	// i = 0;
	// while (i < 10)
	// {
	// 	delete animalArr[i];
	// 	delete animalArr[i + 1];
	// 	i += 2;
	// }

	system("leaks -q AnimalBrains");
}