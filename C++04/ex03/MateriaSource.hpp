#ifndef MATERIASOURCE
#define MATERIASOURCE

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
	MateriaSource();
	MateriaSource(const MateriaSource &materia);
	MateriaSource &operator=(const MateriaSource &materia);
	~MateriaSource();
	void learnMateria(AMateria* materia);
	AMateria* createMateria(std::string const &type);

	private:
	AMateria *materias[4];
};

#endif