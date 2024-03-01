#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if (ac < 2)
		return (std::cout << "no data file given, try again\n", 1);
	BitcoinExchange bce(av[1]);
}
