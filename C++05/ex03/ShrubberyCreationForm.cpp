#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("shrubberyform", 145 , 137)
{
	// std::cout << "ShrubberyCreationForm def" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target) : AForm("shrubberyform", 145, 137)
{
	// std::cout << "constructed with " << target << std::endl;
	this->target = &_target;
	// std::cout << *this->target << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &ShrubberyCreationForm) : AForm("shrubberyform", 145, 137)
{
	// std::cout << "ShrubberyCreationForm copy" << std::endl;
	*this = ShrubberyCreationForm;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &ShrubberyCreationForm)
{
	// std::cout << "ShrubberyCreationForm assign" << std::endl;
	this->setSigned(ShrubberyCreationForm.getIsSigned());
	this->target = ShrubberyCreationForm.target;
	throwEverything();
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	// std::cout << "ShrubberyCreationForm destructor" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
		if ((executor.getGrade() <= this->getXGrade()) \
		&& (this->getIsSigned()))
		{
			std::ofstream out(this->target->append("_shrub").c_str());
	out << std::endl
<<"     	{{}{" << std::endl
<<"       {{}}}{{" << std::endl
<<"     {{}}{}}" << std::endl
<<"        }}}}{" << std::endl
<<"       {{}}}			Ni!" << std::endl
<<"      }{{}{}}" << std::endl
<<"        {{}{}}" << std::endl
<<"      }}{{}}" << std::endl
<<"       {{}}{{" << std::endl
<<"        |  |" << std::endl
<<"     .-''| |``-." << std::endl
<<"    '-._|_o_|_.-'" << std::endl
<<"     `._     _.'" << std::endl
<<"      | :F_P: |" << std::endl
<<"      `._    .'" << std::endl
<<"         `--'" << std::endl
<<"" << std::endl
<<"                  .o00o			Ni!" << std::endl
<<"       Ni!      o000000oo" << std::endl
<<"               00000000000o" << std::endl
<<"              00000000000000" << std::endl
<<"           oooooo  00000000  o88o" << std::endl
<<"        ooOOOOOOOoo  ```''  888888" << std::endl
<<"      OOOOOOOOOOOO'.qQQQQq. `8888'" << std::endl
<<"     oOOOOOOOOOO'.QQQQQQQQQQ|.88'" << std::endl
<<"     OOOOOOOOOO'.QQQQQQQQQQ| |q" << std::endl
<<"      OOOOOOOOO QQQQQQQQQQ| |QQ" << std::endl
<<"        OOOOOOOOO `QQQQQQ| |QQ'" << std::endl
<<"          OO:F_P:O `QQQ|  |Q'" << std::endl
<<"             |. | |  | |" << std::endl
<<"     Ni!     d| ||_|" << std::endl
<<"             qP| | _' `|Ob" << std::endl
<<"                |  | |  |Op" << std::endl
<<"                |  | O| |" << std::endl
<<"        _       ||. |_| || " << std::endl
<<"         `---__||_|   ||  __" << std::endl
<<"               `-'  `-'`-'-'" << std::endl;
		}
		else
			throw Bureaucrat::ExecuteException();
}

std::ostream &operator<<(std::ostream &out, ShrubberyCreationForm &ShrubberyCreationForm)
{
	out << "ShrubberyCreationForm "
	<< ShrubberyCreationForm.getName()
	<< " has sign grade "
	<< ShrubberyCreationForm.getSGrade();
	if (ShrubberyCreationForm.getIsSigned())
		out << " and is signed";
	else
		out << " and is not signed";
	return (out);
}

AForm* ShrubberyCreationForm::create(std::string target)
{
	return (new ShrubberyCreationForm(target));
}