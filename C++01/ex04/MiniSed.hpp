# ifndef MINISED_HPP
# define MINISED_HPP

#include <iostream>
#include <fstream>

class MiniSed
{
	public:
	int InitialCheck(int ac, int expected);
	int FindReplace();
	int execFiRe(std::ifstream &infile, std::ofstream &outfile, \
		std::string s1, std::string s2);
		MiniSed(int ac, char **av);
		~MiniSed();
	
	private:
	int		_ac;
	char	**_av;
};

#endif