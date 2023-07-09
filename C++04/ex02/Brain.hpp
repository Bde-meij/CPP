#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "AAnimal.hpp"

class Brain
{
	public:
		Brain();
		Brain(const Brain &b);
		Brain &operator=(const Brain &brain);
		~Brain();
		std::string ideas[100];
		std::string* getIdeas();
		void setIdeas(std::string ideas);
};


#endif
