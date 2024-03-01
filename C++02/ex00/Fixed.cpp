#include "Fixed.hpp"

Fixed::Fixed() : fixedPoint(0)
{
	std::cout << "Default" << std::endl;
}

Fixed::Fixed(Fixed const &a)
{
	std::cout << "CopyCon" << std::endl;
	*this = a;
}

Fixed &Fixed::operator=(Fixed const &b)
{
	std::cout << "Assign" << std::endl;
	this->fixedPoint = b.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destroy" << std::endl;
}

int Fixed::getRawBits() const
{
	std::cout << "rabbits" << std::endl;
	return (this->fixedPoint);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRaw" << std::endl;
	this->fixedPoint = raw;
}
