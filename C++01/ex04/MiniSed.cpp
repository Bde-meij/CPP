#include "MiniSed.hpp"

int MiniSed::InitialCheck(int ac, int expected)
{
	if (ac != expected)
	{
		std::cout << "invalid arguments" << std::endl;
		return (1);
	}
	return (0);
}

int MiniSed::execFiRe(std::ifstream &infile, std::ofstream &outfile, \
std::string s1, std::string s2)
{
	std::string newLine;
	size_t i = 0;

	while (std::getline(infile, newLine))
	{
		while ((i = newLine.find(s1, i)) != std::string::npos)
		{
			newLine.erase(i, s1.length());
			newLine.insert(i, s2);
			i += s2.length();
		}
		outfile << newLine;
		i = 0;
		if (infile.eof())
			break ;
		outfile << std::endl;
	}
	infile.close();
	outfile.close();
	return (0);
}

int MiniSed::FindReplace()
{
	if (this->_ac != 4 || !this->_av[2][0])// || !av[3][0])
	{
		std::cout << "invalid arguments" << std::endl;
		return (1);
	}
	std::ifstream infile(this->_av[1]);
	std::ofstream outfile(((std::string)this->_av[1]).append(".replace"));
	std::string s1 = this->_av[2];
	std::string s2 = this->_av[3];
	if (execFiRe(infile, outfile, s1, s2))
		return (1);
	return (0);
}

MiniSed::MiniSed(int ac, char **av) : _ac(ac), _av(av)
{
	// std::cout << "program start" << std::endl;
}

MiniSed::~MiniSed()
{
	// std::cout << "program end" << std::endl;
}