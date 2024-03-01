#ifndef PresidentialPardonForm_HPP
#define PresidentialPardonForm_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:
	PresidentialPardonForm(std::string _target);
	~PresidentialPardonForm();

	void execute(Bureaucrat const &executor) const;
	std::string target;

	private:
	PresidentialPardonForm();
	PresidentialPardonForm(PresidentialPardonForm &PresidentialPardonForm);
	PresidentialPardonForm &operator=(PresidentialPardonForm &PresidentialPardonForm);
};

std::ostream &operator<<(std::ostream &out, PresidentialPardonForm &PresidentialPardonForm);

#endif