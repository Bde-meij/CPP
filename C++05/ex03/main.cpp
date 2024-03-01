#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
	
int main()
{
	Intern dude;
	AForm *a = dude.makeForm("shrubbery creation", "AAAA");
	AForm *b = dude.makeForm("robotomy request", "BBBB");
	AForm *c = dude.makeForm("presidential pardon", "CCCC");
	AForm *d = dude.makeForm("qergqerg", "ewrgwetg");
	std::cout << *a << std::endl;
	std::cout << *b << std::endl;
	std::cout << *c << std::endl;
	std::cout << d << std::endl;
	delete a;
	delete b;
	delete c;
	delete d;
	return (0);
}
