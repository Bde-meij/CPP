#ifndef ICE
#define ICE

#include "AMateria.hpp"

class Ice: public AMateria
{
	public:
	Ice();
	Ice(const Ice &ice);
	Ice(std::string const & type);
	Ice &operator=(const Ice &material);
	~Ice();

	AMateria *clone() const;
	void use(ICharacter &target);
};

#endif