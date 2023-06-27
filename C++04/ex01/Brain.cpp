#include "Brain.hpp"

Brain::Brain()
{
	std::cout << GREEN << "Brain defCon" << WHITE << std::endl;
}

Brain::Brain(const Brain &brain)
{
	std::cout << GREEN << "Brain copCon" << WHITE << std::endl;
	*this = brain;
}

Brain &Brain::operator=(const Brain &brain)
{
	int i = 0;
	std::cout << YELLOW << "Brain assOp" << WHITE << std::endl;
	while (i < 100)
	{
		this->ideas[i] = brain.ideas[i];
		i++;
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << RED << "Brain Destroyed" << WHITE << std::endl;
}
