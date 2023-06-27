#ifndef PONY_HPP
#define PONY_HPP

#include "Animal.hpp"

class Pony : public Animal
{
	public:
		Pony();
		Pony(Pony const &);
		Pony &operator=(Pony const &);
		~Pony();

		void doMagic(std::string const & target);
	};

#endif