#include "iostream"

// virtual; can be overwritten -> dynamic dispatch; selecting implementation of polymorph

class ACharacter
{
	public:
		virtual void attack(std::string const &target) = 0;
		virtual void sayHello(std::string const &target);
};

class Warrior : public ACharacter
{
	public:
		virtual void sayHello(std::string const &target);
		virtual void attack(std::string const &target);
};

// class ICoffeeMaker
// {
// 	public:
// 		virtual void 	fillWaterTank(IWaterSource *src) = 0;
// 		virtual ICoffee	*makeCoffee(std::string const &type) = 0;
// };

void ACharacter::sayHello(std::string const &target)
{
	std::cout << "Hello " << target << "!" << std::endl;
}

void Warrior::sayHello(std::string const &target)
{
	std::cout << "F*** off " << target << " I don't like you!" << std::endl;
}

void Warrior::attack(std::string const &target)
{
	std::cout << "attacks " << target << " with a sword" << std::endl;
}


int main()
{
	// Warrior *a = new Warrior();
	ACharacter *a = new Warrior();
	// a->sayHello("skaterboys");
	// b->sayHello("skaterboys");
	a->sayHello("skaterboys");
	a->attack("skaterboys");

}
