#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	// std::cout << "MateriaSource defCon" << std::endl;
	int idx = 0;
	while (idx < 4)
	{
		this->materias[idx] = 0;
		idx++;
	}
}

MateriaSource::MateriaSource(const MateriaSource &materia)
{
	// std::cout << "MateriaSource copyCon" << std::endl;
	*this = materia;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &materia)
{
	// std::cout << "MateriaSource assign" << std::endl;
	if (this == &materia)
		return (*this);
	int idx = 0;
	while (idx < 4)
	{
		this->materias[idx] = 0;
		if (materia.materias[idx]->clone() != 0)
			this->materias[idx] = materia.materias[idx]->clone();
		idx++;
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	delete this->materias[0];
	delete this->materias[1];
	delete this->materias[2];
	delete this->materias[3];
	// std::cout << "MateriaSource destroy" << std::endl;
}

void MateriaSource::learnMateria(AMateria* materia)
{
	// std::cout << "MateriaSource learn" << std::endl;
	int idx = 0;
	while (this->materias[idx] != 0)
		idx++;
	if (idx < 4)
		this->materias[idx] = materia;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	// std::cout << "MateriaSource create" << std::endl;
	int idx = 0;
	while (this->materias[idx])
	{
		if (this->materias[idx]->getType() == type)
			return (this->materias[idx]->clone());
		idx++;
	}
	std::cout << "type is invalid, no materia created" << std::endl;
	return (NULL);
}
