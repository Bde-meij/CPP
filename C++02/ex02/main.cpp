#include "Fixed.hpp"

// $> ./a.out
// 0
// 0.00390625
// 0.00390625
// 0.00390625
// 0.0078125
// 10.1016
// 10.1016
// $>

// int main()
// {
// 	Fixed a;
// 	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
// 	std::cout << a << std::endl;
// 	std::cout << ++a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << b << std::endl;
// 	std::cout << Fixed::max( a, b ) << std::endl;
// }

int main()
{
	Fixed yolo(5.5f);
	yolo--;
	std::cout << yolo << std::endl;
	yolo++;
	std::cout << yolo << std::endl;
	Fixed gg(6.5f);
	std::cout << yolo.max(gg, gg) << std::endl;
	std::cout << yolo.min(gg, gg) << std::endl;
	std::cout << yolo.max(yolo, gg) << std::endl;
	std::cout << yolo.min(yolo, gg) << std::endl;
	std::cout << gg - yolo << std::endl;
	std::cout << gg + yolo << std::endl;
	std::cout << gg * yolo << std::endl;
	std::cout << gg / yolo << std::endl;
	std::cout << (gg != yolo) << std::endl;
	std::cout << (gg == yolo) << std::endl;
}