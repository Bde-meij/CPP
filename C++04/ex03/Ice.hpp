#pragma once

#include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		Ice(const Ice &ice);
		Ice(std::string const & type);
		Ice &operator=(const Ice &material);
		~Ice();

		virtual AMateria *clone() const;
};