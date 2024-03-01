#include "Intern.hpp"

Intern::Intern()
{

}

Intern::Intern(const Intern &intern)
{
	// makes no sense
	*this = intern;
}

Intern &Intern::operator=(const Intern &intern)
{
	// makes no sense
	(void) intern;
	return (*this);
}

Intern::~Intern()
{

}

AForm *Intern::makeForm(std::string formName, std::string formTarget)
{
	Intern::FormOptions look[3] =
	{
		{"shrubbery creation", ShrubberyCreationForm::create},
		{"robotomy request", RobotomyRequestForm::create},
		{"presidential pardon", PresidentialPardonForm::create}
	};

	int i = 0;

	while (i < 3)
	{
		if (look[i].request == formName)
		{
			std::cout << "Intern creates form "
			<< "with target " << formTarget << std::endl;
			return(look[i].create(formTarget));
		}
		i++;
	}
	std::cout << "intern could not find requested form" << std::endl;
	return (NULL);
}
