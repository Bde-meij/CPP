#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	// test for deep/shallow
	int i = 0;
	Animal *animalArr[20];

	while (i < 20)
	{
		animalArr[i] = new Cat();
		animalArr[i + 1] = new Dog();
		i += 2;
	}
	i = 0;
	while (i < 10)
	{
		delete animalArr[i];
		delete animalArr[i + 1];
		i += 2;
	}
	system("leaks -q AnimalBrains");
}