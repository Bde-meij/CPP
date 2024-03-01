#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
	
int main()
{
	std::cout << std::endl;

	// test shrub
	Bureaucrat gappie("gappie", 1); // can execute
	// Bureaucrat gappie("gappie", 138); // sign but not execute
	// Bureaucrat gappie("gappie", 150); // cannot sign
	ShrubberyCreationForm shrubform("fileName");
	gappie.signForm(shrubform);
	gappie.executeForm(shrubform);
	std::cout << shrubform << std::endl;

	std::cout << std::endl;

	// test robot
	Bureaucrat gast("gast", 1); // can execute
	// Bureaucrat gast("gast", 71); // sign but not execute
	// Bureaucrat gast("gast", 150); // cannot sign
	RobotomyRequestForm robotform("victim");
	gast.signForm(robotform);
	gast.executeForm(robotform);
	std::cout << robotform << std::endl;

	std::cout << std::endl;

	// test president
	Bureaucrat gozer("gozer", 1); // can execute
	// Bureaucrat gozer("gozer", 24); // sign but not execute
	// Bureaucrat gozer("gozer", 150); // cannot sign
	PresidentialPardonForm presidentform("criminal");
	gozer.signForm(presidentform);
	gozer.executeForm(presidentform);
	std::cout << presidentform << std::endl;
}