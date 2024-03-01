#include "Fixed.hpp"

// Default
// copyCon
// assign
// rabbits
// Default
// assign
// rabbits
// rabbits
// 0
// rabbits
// 0
// rabbits
// 0
// Destroy
// Destroy
// Destroy

int main() 
{
	Fixed a;
	// a.setRawBits(1000);
	Fixed b( a );
	Fixed c;
	// b.setRawBits(3567);
	c = b;
	// c.setRawBits(5);
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}

// copy constructor can copy entire struct at once,
// assignment overload has to assign var by var;