# ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(Fixed const &a);
		~Fixed();

	int getRawBits() const;
	void setRawBits(int const raw);
	Fixed &operator=(const Fixed &b);

	private:
	int fixedPoint;
	static const int fracBits = 8;
};

# endif
