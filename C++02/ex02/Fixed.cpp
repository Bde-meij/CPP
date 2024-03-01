#include "Fixed.hpp"

Fixed::Fixed() : fixedPoint(0)
{
	// std::cout << "Default" << std::endl;
}

Fixed::Fixed(Fixed const &a)
{
	// std::cout << "CopyCon" << std::endl;
	*this = a;
}

Fixed::Fixed(const float fn)
{
	// std::cout << "FloatCon" << std::endl;
	this->fixedPoint = roundf(fn * (1 << this->fracBits));
}

Fixed::Fixed(const int in)
{
	// std::cout << "intCon" << std::endl;
	this->fixedPoint = in << this->fracBits;
}

Fixed::~Fixed()
{
	// std::cout << "Destroy" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &b)
{
	// std::cout << "Assign" << std::endl;
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
	// std::cout << "setRaw" << std::endl;
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

Fixed Fixed::operator+(const Fixed &b)
{
	this->fixedPoint += b.fixedPoint;
	return (*this);
}

Fixed Fixed::operator-(const Fixed &b)
{
	this->fixedPoint -= b.fixedPoint;
	return (*this);
}

Fixed Fixed::operator*(const Fixed &b)
{
	// this->fixedPoint = this->toFloat() * b.toFloat();
	return (this->toFloat() * b.toFloat());
}

Fixed Fixed::operator/(const Fixed &b)
{
	this->fixedPoint /= b.fixedPoint;
	return (*this);
}

bool Fixed::operator>(const Fixed small)
{
	if (this->fixedPoint > small.fixedPoint)
		return (1);
	return (0);
}

bool Fixed::operator>=(const Fixed small)
{
	if (this->fixedPoint >= small.fixedPoint)
		return (1);
	return (0);
}

bool Fixed::operator<(const Fixed big)
{
	if (this->fixedPoint < big.fixedPoint)
		return (1);
	return (0);
}

bool Fixed::operator<=(const Fixed big)
{
	if (this->fixedPoint <= big.fixedPoint)
		return (1);
	return (0);
}

bool Fixed::operator==(const Fixed rv)
{
	if (this->fixedPoint == rv.fixedPoint)
		return (1);
	return (0);
}

bool Fixed::operator!=(const Fixed rv)
{
	if (this->fixedPoint != rv.fixedPoint)
		return (1);
	return (0);
}


Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	this->fixedPoint++;
	return (temp);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	this->fixedPoint--;
	return (temp);
}

Fixed &Fixed::operator++()
{
	++this->fixedPoint;
	return (*this);
}

Fixed &Fixed::operator--()
{
	--this->fixedPoint;
	return (*this);
}


Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a.fixedPoint < b.fixedPoint)
		return (a);
	if (b.fixedPoint < a.fixedPoint)
		return (b);
	std::cout << "warning, equal values or comparison not able" << std::endl;
	return (a);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a.fixedPoint > b.fixedPoint)
		return (a);
	if (b.fixedPoint > a.fixedPoint)
		return (b);
	std::cout << "warning, equal values or comparison not able" << std::endl;
	return (a);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.fixedPoint < b.fixedPoint)
		return (a);
	if (b.fixedPoint < a.fixedPoint)
		return (b);
	std::cout << "warning, equal values or comparison not able" << std::endl;
	return (a);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.fixedPoint > b.fixedPoint)
		return (a);
	if (b.fixedPoint > a.fixedPoint)
		return (b);
	std::cout << "warning, equal values or comparison not able" << std::endl;
	return (a);
}
