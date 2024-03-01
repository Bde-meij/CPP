#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	AMateria* tmp;

	tmp = src->createMateria("ice");
	Character me;
	me.equip(tmp);
	tmp = src->createMateria("cure");
	Character bob;
	bob.equip(tmp);

	me.viewInventory();
	bob.viewInventory();

	bob = me;
	bob.equip(tmp);

	me.viewInventory();
	bob.viewInventory();
	system("leaks -q Materia");

	// IMateriaSource* src = new MateriaSource();
	// ICharacter* me = new Character("me");

	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());
	// AMateria* tmp;

	// tmp = src->createMateria("ice");
	// tmp = src->createMateria("fire");
	// tmp = src->createMateria("thunder");
	// me->equip(tmp);
	// me->viewInventory();
	// tmp = src->createMateria("cure");
	// me->equip(tmp);
	// me->equip(tmp);
	// tmp = src->createMateria("ice");
	// me->equip(tmp);
	// me->equip(tmp);

	// me->viewInventory();
	// me->unequip(1);
	// me->viewInventory();
	// me->equip(tmp);
	// me->viewInventory();
	// system("leaks -q Materia");

	// ICharacter* bob = new Character("bob");
	// me->use(0, *bob);
	// me->use(1, *bob);
	// me->use(2, *bob);
	// me->use(3, *bob);

	// me->use(-1, *bob);
	// me->use(646, *bob);

	// me->viewInventory();

	// delete bob;
	// delete me;
	// delete src;
	// system("leaks -q Materia");
	// return 0;
}