#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("presidentform", 25, 5)
{
	// std::cout << "PresidentialPardonForm def" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string _target) : AForm("presidentform", 25, 5)
{
	// std::cout << "constructed with " << target << std::endl;
	this->target = _target;
	// std::cout << *this->target << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &PresidentialPardonForm) : AForm("presidentform", 25, 5)
{
	// std::cout << "PresidentialPardonForm copy" << std::endl;
	*this = PresidentialPardonForm;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &PresidentialPardonForm)
{
	// std::cout << "PresidentialPardonForm assign" << std::endl;
	this->setSigned(PresidentialPardonForm.getIsSigned());
	this->target = PresidentialPardonForm.target;
	throwEverything();
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	// std::cout << "PresidentialPardonForm destructor" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
		if ((executor.getGrade() <= this->getXGrade()) \
		&& (this->getIsSigned()))
		{
			std::cout << this->target << 
			" has been pardoned by Zaphod Beeblebrox" 
			<< std::endl;
		}
		else
			throw Bureaucrat::ExecuteException();
}

std::ostream &operator<<(std::ostream &out, PresidentialPardonForm &PresidentialPardonForm)
{
	out << "PresidentialPardonForm "
	<< PresidentialPardonForm.getName()
	<< " has sign grade "
	<< PresidentialPardonForm.getSGrade();
	if (PresidentialPardonForm.getIsSigned())
		out << " and is signed";
	else
		out << " and is not signed";
	return (out);
}