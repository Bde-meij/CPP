#pragma once

#include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure();
		Cure(const Cure &cure);
		Cure(std::string const & type);
		Cure &operator=(const Cure &material);
		~Cure();

		virtual AMateria *clone() const;
};