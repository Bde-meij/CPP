#include "AForm.hpp"

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Form grade too high");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Form grade too low");
}

AForm::AForm() : name("noName"), isSigned(0), sGrade(150), xGrade(150)
{
	// std::cout << "Aform def" << std::endl;
}

AForm::AForm(std::string _name, int _sGrade, int _xGrade) : name(_name), sGrade(_sGrade), xGrade(_xGrade)
{
	// std::cout << "Aform def" << std::endl;
	this->isSigned = 0;
	throwEverything();
}

AForm::AForm(AForm &Aform) : sGrade(Aform.getSGrade()), xGrade(Aform.getXGrade())
{
	// std::cout << "Aform copy" << std::endl;
	*this = Aform;
}

AForm &AForm::operator=(AForm &AForm)
{
	// std::cout << "Aform assign" << std::endl;
	this->isSigned = AForm.getIsSigned();
	throwEverything();
	return (*this);
}

AForm::~AForm()
{
	// std::cout << "Aform destructor" << std::endl;
}

void AForm::setSigned (bool i)
{
	this->isSigned = i;
}

std::string AForm::getName() const
{
	return(this->name);
}

bool AForm::getIsSigned() const
{
	return(this->isSigned);
}

int AForm::getSGrade() const
{
	return(this->sGrade);
}

int AForm::getXGrade() const
{
	return(this->xGrade);
}

void AForm::throwEverything()
{
	if (this->sGrade < 1)
		throw GradeTooHighException();
	if (this->sGrade > 150)
		throw GradeTooLowException();
}

void AForm::beSigned(Bureaucrat &bur)
{
	// std::cout << "Aform beSigned" << std::endl;
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

std::ostream &operator<<(std::ostream &out, AForm &Aform)
{
	out << "AForm "
	<< Aform.getName()
	<< " has sign grade "
	<< Aform.getSGrade();
	if (Aform.getIsSigned())
		out << " and is signed";
	else
		out << " and is not signed";
	return (out);
}