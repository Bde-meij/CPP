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

Fixed::Fixed(const float fn)
{
	std::cout << "FloatCon" << std::endl;
	this->fixedPoint = roundf(fn * (1 << this->fracBits));
}

Fixed::Fixed(const int in)
{
	std::cout << "intCon" << std::endl;
	this->fixedPoint = in << this->fracBits;
}

Fixed::~Fixed()
{
	std::cout << "Destroy" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &b)
{
	std::cout << "Assign" << std::endl;
	this->fixedPoint = b.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &lhs, const Fixed &rhs)
{
	lhs << (rhs.toFloat());
	return (lhs);
}

int Fixed::getRawBits() const
{
	// std::cout << "rabbits" << std::endl;
	return (this->fixedPoint);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRaw" << std::endl;
	this->fixedPoint = raw;
}

float 	Fixed::toFloat() const
{
	return ((float) this->fixedPoint / (1 << this->fracBits));
}

int 	Fixed::toInt() const
{
	return (this->fixedPoint >> this->fracBits);
}
