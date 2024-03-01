#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:
	AForm();
	AForm(AForm &Aform);
	AForm(std::string _name, int _sGrade, int xGrade);
	AForm &operator=(AForm &Aform);
	virtual ~AForm();

	void beSigned(Bureaucrat &bur);
	virtual void execute(Bureaucrat const &executor) const = 0;
	std::string getName() const;
	bool getIsSigned() const;
	void setSigned (bool i);
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

std::ostream &operator<<(std::ostream &out, AForm &Aform);

#endif