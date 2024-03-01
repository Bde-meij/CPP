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
