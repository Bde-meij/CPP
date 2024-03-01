#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
   public:
	Bureaucrat();
	Bureaucrat(std::string _name, int grade);
	Bureaucrat(Bureaucrat &Bureaucrat);
	Bureaucrat &operator=( Bureaucrat &Bureaucrat);
	~Bureaucrat();

	int	getGrade() const;
	std::string getName() const;
	void signForm(AForm &form);
	void executeForm(AForm const & form);
	void incrementGrade();
	void decrementGrade();
	void throwEverything();

	class GradeTooHighException : public std::exception
	{
		public:
		const char * what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
		const char * what() const throw();
	};

	class ExecuteException : public std::exception
	{
		public:
		const char * what() const throw();
	};

	private:
	int	grade;
	std::string const name;
};

std::ostream &operator<<(std::ostream &out, Bureaucrat &bur);

#endif