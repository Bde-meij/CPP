#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat(std::string name);
		Cat(Cat const &);
		Cat &operator=(Cat const &);
		~Cat();

		void scorn(std::string const & target);
	};

#endif