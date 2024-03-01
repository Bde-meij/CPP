#ifndef CHARACTER
#define CHARACTER

#include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
	Character();
	Character(std::string name);
	Character(const Character &character);
	Character &operator=(const Character &character);
	~Character();
	std::string const & getName() const;
	AMateria getMateria(int idx);
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
	void viewInventory();

	private:
	std::string name;
	AMateria *materias[4];
};

#endif