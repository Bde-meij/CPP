#ifndef ShrubberyCreationForm_HPP
#define ShrubberyCreationForm_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <string>
#include <cstring>

class ShrubberyCreationForm : public AForm
{
	public:
	ShrubberyCreationForm(std::string _target);
	~ShrubberyCreationForm();

	static AForm* create(std::string target);
	void execute(Bureaucrat const &executor) const;
	std::string *target;

	private:
	ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm &ShrubberyCreationForm);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm &ShrubberyCreationForm);
};

std::ostream &operator<<(std::ostream &out, ShrubberyCreationForm &ShrubberyCreationForm);

#endif