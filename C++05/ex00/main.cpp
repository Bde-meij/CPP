#include "Bureaucrat.hpp"
	
int main()
{
	// variate construction
	// Bureaucrat bur;
	// bur = burt;

	// test increment, try/catch exceptions and <<OPS
	Bureaucrat bur("thomas", 1);
	std::cout << bur << std::endl;
	try
	{
		bur.incrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << bur << std::endl;

	int i = 0;
	while (i < 150)
	{
		try
		{
			bur.decrementGrade();
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		i++;
	}
	std::cout << bur << std::endl;
	
	// Bureaucrat bureau("thomas", 500);
	// std::cout << bureau << std::endl;
	// alternate construction with wrong values
	// try
	// {
	// 	Bureaucrat bureau("thomas", 500);
	// }
	// catch (Bureaucrat::GradeTooHighException& highEx)
	// {
	// 	std::cout << highEx.what() << std::endl;
	// }
	// catch (Bureaucrat::GradeTooLowException& lowEx)
	// {
	// 	std::cout << lowEx.what() << std::endl;
	// }
}