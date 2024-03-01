#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public:
	Intern();
	Intern(const Intern &intern);
	~Intern();
	Intern &operator=(const Intern &intern);

	AForm *makeForm(std::string formName, std::string formTarget);

	private:
	struct FormOptions
	{
		std::string request;
		AForm *(*create)(std::string name);
	};
};

#endif