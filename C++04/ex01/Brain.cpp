#include "Brain.hpp"

Brain::Brain()
{
	std::cout << GREEN << "Brain defCon" << WHITE << std::endl;
	int i = 0;
	while (i < 100)
	{
		this->ideas[i] = "idea";
		i++;
	}
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

std::string *Brain::getIdeas()
{
	return (this->ideas);
}

void Brain::setIdeas(std::string newIdeas)
{
	int i = 0;
	while (i < 100)
	{
		this->ideas[i] = newIdeas;
		i++;
	}
}

Brain::~Brain()
{
	std::cout << RED << "Brain Destroyed" << WHITE << std::endl;
}
