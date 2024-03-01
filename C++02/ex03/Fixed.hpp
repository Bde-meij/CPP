# ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(Fixed const &a);
		Fixed(const float);
		Fixed(const int);
		~Fixed();

	Fixed &operator=(const Fixed &b);
	Fixed operator+(const Fixed &b);
	Fixed operator-(const Fixed &b);
	Fixed operator*(const Fixed &b);
	Fixed operator/(const Fixed &b);

	bool operator>(const Fixed small);
	bool operator>=(const Fixed small);
	bool operator<(const Fixed big);
	bool operator<=(const Fixed big);
	bool operator==(const Fixed rv);
	bool operator!=(const Fixed rv);

	Fixed operator++(int);
	Fixed operator--(int);
	Fixed &operator++();
	Fixed &operator--();

	static Fixed		&min(Fixed &a, Fixed &b);
	static Fixed		&max(Fixed &a, Fixed &b);
	static const Fixed	&min(const Fixed &a, const Fixed &b);
	static const Fixed	&max(const Fixed &a, const Fixed &b);

	int 	getRawBits() const;
	void 	setRawBits(int const raw);
	float 	toFloat() const;
	int 	toInt() const;
	
	private:
	int fixedPoint;
	static const int fracBits = 8;
};

std::ostream &operator<<(std::ostream &lhs, const Fixed &rhs);
# endif
