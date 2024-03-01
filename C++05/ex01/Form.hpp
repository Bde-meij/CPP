#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
	Form();
	Form(Form &form);
	Form(std::string _name, int _sGrade, int xGrade);
	Form &operator=(Form &form);
	~Form();

	void beSigned(Bureaucrat &bur);
	std::string getName() const;
	bool getIsSigned() const;
	int getSGrade() const;
	int getXGrade() const;

	class GradeTooLowException : public std::exception
	{
		public:
		const char *what() const throw();
	};

	class GradeTooHighException : public std::exception
	{
		public:
		const char *what() const throw();
	};

	void throwEverything();

	private:
	std::string const name;
	bool isSigned;
	int const sGrade;
	int const xGrade;
};

std::ostream &operator<<(std::ostream &out, Form &form);

#endif