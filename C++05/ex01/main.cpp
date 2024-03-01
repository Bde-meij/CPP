#include "Form.hpp"

int main()
{
	// 	1
	// 	test constructors and print
	Form forrum;
	std::cout << forrum << std::endl;

	Form forrie("aeg;fuchwic", 23, 23);
	std::cout << forrie << std::endl;

	try
	{
		Form wrongforrie("aeg;fuchwic", 500, -23);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Form badforrie("aeg;fuchwic", -23, -23);
		forrum = badforrie;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}