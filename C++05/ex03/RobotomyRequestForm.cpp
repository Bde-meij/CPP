#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("robotform", 72, 45)
{
	// std::cout << "RobotomyRequestForm def" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string _target) : AForm("robotform", 72, 45)
{
	// std::cout << "constructed with " << target << std::endl;
	this->target = _target;
	// std::cout << *this->target << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &RobotomyRequestForm) : AForm("robotform", 72, 45)
{
	// std::cout << "RobotomyRequestForm copy" << std::endl;
	*this = RobotomyRequestForm;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &RobotomyRequestForm)
{
	// std::cout << "RobotomyRequestForm assign" << std::endl;
	this->setSigned(RobotomyRequestForm.getIsSigned());
	this->target = RobotomyRequestForm.target;
	throwEverything();
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	// std::cout << "RobotomyRequestForm destructor" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if ((executor.getGrade() <= this->getXGrade()) \
	&& (this->getIsSigned()))
	{
		std::cout << "Robotomizing..." << std::endl;
		std::cout << "*** drilling sounds ***" << std::endl;
		srand(time(NULL));
		if (rand() % 2)
		{
			std::cout << this->target << ":\'beeep, booop\'" << std::endl;
			std::cout << "Robotomization of " << this->target << " succesful" << std::endl;
		}
		else
		{
			std::cout << this->target << ":\'please, stop! AAaAFAEGTGASHEAEG!\'" << std::endl;
			std::cout << "Robotomization of " << this->target << " failed" << std::endl;
		}
	}
	else
		throw Bureaucrat::ExecuteException();
}

std::ostream &operator<<(std::ostream &out, RobotomyRequestForm &RobotomyRequestForm)
{
	out << "RobotomyRequestForm "
	<< RobotomyRequestForm.getName()
	<< " has sign grade "
	<< RobotomyRequestForm.getSGrade();
	if (RobotomyRequestForm.getIsSigned())
		out << " and is signed";
	else
		out << " and is not signed";
	return (out);
}

AForm* RobotomyRequestForm::create(std::string target)
{
	return (new RobotomyRequestForm(target));
}