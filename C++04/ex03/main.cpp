#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ices");
	// tmp = src->createMateria("fire");
	// tmp = src->createMateria("thunder");
	// me->equip(tmp);
	// tmp = src->createMateria("cure");
	// me->equip(tmp);
	// me->equip(tmp);
	// me->equip(tmp);
	// me->equip(tmp);
	// me->equip(tmp);
	// me->equip(tmp);
	// ICharacter* bob = new Character("bob");
	// me->use(0, *bob);
	// me->use(1, *bob);
	// me->use(-1, *bob);
	// me->use(646, *bob);
	// delete bob;
	// delete me;
	// delete src;
	// system("leaks -q Materia");
	// return 0;
}