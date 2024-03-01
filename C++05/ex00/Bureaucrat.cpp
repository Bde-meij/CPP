#include "Bureaucrat.hpp"


const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("bureaucrat grade too high");
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("bureaucrat grade too low");
}

Bureaucrat::Bureaucrat() : grade(150), name("noName")
{
	// std::cout << "Bur default" << std::endl;
}
Bureaucrat::Bureaucrat(std::string _name, int grade) : name(_name)
{
	// std::cout << "Bur default" << std::endl;
	this->grade = grade;
	throwEverything();
}

Bureaucrat::Bureaucrat(Bureaucrat &Bureaucrat)
{
	// std::cout << "Bur copy" << std::endl;
	*this = Bureaucrat;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &Bureaucrat)
{
	// std::cout << "Bur assignment" << std::endl;
	this->grade = Bureaucrat.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	// std::cout << "Bur destroyed" << std::endl;
}

int	Bureaucrat::getGrade() 
{
	// std::cout << "Bur getGrade" << std::endl;
	return (this->grade);
}

std::string Bureaucrat::getName() 
{
	// std::cout << "Bur getName" << std::endl;
	return (this->name);
}

void Bureaucrat::incrementGrade()
{
	// std::cout << "Bur increment" << std::endl;
	this->grade--;
	throwEverything();
}

void Bureaucrat::decrementGrade()
{
	// std::cout << "Bur decrement" << std::endl;
	this->grade++;
	throwEverything();
}

void Bureaucrat::throwEverything()
{
	if (this->grade < 1)
	{
		this->grade = 1;
		throw GradeTooHighException();
	}
	if (this->grade > 150)
	{
		this->grade = 150;
		throw GradeTooLowException();
	}
}

std::ostream &operator<<(std::ostream &out, Bureaucrat &bur)
{
	out << bur.getName()
	<< " has grade "
	<< bur.getGrade();
	return (out);
}
