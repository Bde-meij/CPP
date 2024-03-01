#include "Form.hpp"
#include "Bureaucrat.hpp"

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Form grade too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Form grade too low");
}

Form::Form() : name("noName"), isSigned(0), sGrade(150), xGrade(150)
{
	// std::cout << "form def" << std::endl;
}

Form::Form(std::string _name, int _sGrade, int _xGrade) : name(_name), sGrade(_sGrade), xGrade(_xGrade)
{
	// std::cout << "form def" << std::endl;
	this->isSigned = 0;
	throwEverything();
}

Form::Form(Form &form) : sGrade(form.getSGrade()), xGrade(form.getXGrade())
{
	// std::cout << "form copy" << std::endl;
	*this = form;
}

Form &Form::operator=(Form &Form)
{
	// std::cout << "form assign" << std::endl;
	this->isSigned = Form.getIsSigned();
	throwEverything();
	return (*this);
}

Form::~Form()
{
	// std::cout << "form destructor" << std::endl;
}

std::string Form::getName() const
{
	return(this->name);
}

bool Form::getIsSigned() const
{
	return(this->isSigned);
}

int Form::getSGrade() const
{
	return(this->sGrade);
}

int Form::getXGrade() const
{
	return(this->xGrade);
}

void Form::throwEverything()
{
	if (this->sGrade < 1)
		throw GradeTooHighException();
	if (this->sGrade > 150)
		throw GradeTooLowException();
}

void Form::beSigned(Bureaucrat &bur)
{
	// std::cout << "form beSigned" << std::endl;
	std::string burname = bur.getName();
	if (bur.getGrade() <= this->sGrade)
	{
		std::cout << 
		burname << " signed " << this->name
		<< std::endl;
		this->isSigned = 1;
	}
	else
	{
		std::cout << 
		burname << " did not sign " << this->name
		<< " because grade is invalid"
		<< std::endl;
		throw GradeTooLowException();
	}
	//	throw GradeTooHighException; <-- this one makes more sense
}

std::ostream &operator<<(std::ostream &out, Form &form)
{
	out << "Form "
	<< form.getName()
	<< " has sign grade "
	<< form.getSGrade();
	if (form.getIsSigned())
		out << " and is signed";
	else
		out << " and is not signed";
	return (out);
}