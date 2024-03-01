#include "MiniSed.hpp"

int main(int ac, char **av)
{
	MiniSed Replace(ac, av);
	return(Replace.FindReplace());
}
