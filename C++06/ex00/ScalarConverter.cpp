#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	// std::cout << "ScalCon def" << std::endl;	
}

ScalarConverter::ScalarConverter(const ScalarConverter &scalarConverter)
{
	static_cast<void>(scalarConverter);
	// std::cout << "ScalCon copy" << std::endl;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &scalarConverter)
{
	static_cast<void>(scalarConverter);
	return (*this);
	// std::cout << "ScalCon assign" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
	// std::cout << "ScalCon destroy" << std::endl;
}

int	ScalarConverter::checkIfTof(std::string str)
{
	size_t	i;
	int		dot;

	i = 0;
	dot = 0;
	while ((str[i] >= '0' && str[i] <= '9') || str[i] == '.' || \
		(str[i] == '-' && i == 0))
	{
		if (str[i] == '.')
			dot++;
		i++;
	}
	if (i != str.length() || dot > 1)
		return (0);
	return (1);
}

void ScalarConverter::convert(std::string strArg)
{
	if (checkIfTof(strArg))
	{
		int intArg = stoi(strArg);
		int floatArg = static_cast<int>(stof(strArg) * 10) % 10;
		int doubleArg = static_cast<int>(stod(strArg) * 10) % 10;

		if (floatArg < 0)
			floatArg *= -1;
		if (doubleArg < 0)
			doubleArg *= -1;
		if (intArg < 32 || intArg > 126)
			std::cout << "char: can't display" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(intArg) << "'" << std::endl;
		std::cout << "int: " << intArg << std::endl
		<< "float: " << intArg << "." << floatArg << "f" << std::endl
		<< "double: " << intArg << "." << doubleArg << std::endl;
	}
	else if (strArg.length() == 1)
	{
		if (strArg[0] < 32 || strArg[0] > 126)
			std::cout << "char: can't display" << std::endl;
		else
			std::cout << "char: '" << strArg[0] << "'" << std::endl;
		std::cout << "int: " << (int)strArg[0] << std::endl
		<< "float: " << (int)strArg[0] << ".0" << "f" << std::endl
		<< "double: " << (int)strArg[0] << ".0" << std::endl;
	}
	else
	{
		std::cout << "char: not possible" << std::endl;
		std::cout << "int: not possible" << std::endl;
		if (!strArg.compare("inf") || !strArg.compare("inff") || \
		!strArg.compare("-inf") || !strArg.compare("+inf") || \
		!strArg.compare("-inff") || !strArg.compare("+inff"))
		{
			std::cout << "float: " << stof(strArg) << "f" << std::endl;
			std::cout << "double: " << stod(strArg) << std::endl;
		}
		else
		{
			std::cout << "float: nanf" << std::endl;
			std::cout << "double: nan" << std::endl;
		}
	}
}









