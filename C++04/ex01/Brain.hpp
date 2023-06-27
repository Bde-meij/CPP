#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain
{
	public:
		Brain();
		Brain(const Brain &b);
		Brain &operator=(const Brain &brain);
		~Brain();
		std::string ideas[100];
};


#endif

// const, houdt dignen constant, mogelijk beter met compilen en behoedt programmeurs