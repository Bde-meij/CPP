#ifndef RobotomyRequestForm_HPP
#define RobotomyRequestForm_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "math.h"

class RobotomyRequestForm : public AForm
{
	public:
	RobotomyRequestForm(std::string _target);
	~RobotomyRequestForm();

	static AForm* create(std::string target);
	void execute(Bureaucrat const &executor) const;
	std::string target;

	private:
	RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm &RobotomyRequestForm);
	RobotomyRequestForm &operator=(RobotomyRequestForm &RobotomyRequestForm);
};

std::ostream &operator<<(std::ostream &out, RobotomyRequestForm &RobotomyRequestForm);

#endif