#include "Point.hpp"

Point::Point() : x(0), y(0)
{
	std::cout << "default Point con" << std::endl;
}

Point::Point(float a, float b) : x(a), y(b)
{
	std::cout << "para Point con" << std::endl;
}

Point::Point(Point &point)
{
	*this = point;
	std::cout << "para Point con" << std::endl;
}

Point::~Point()
{
	std::cout << "Point destroyed" << std::endl;
}

Point &Point::operator=(Point &rhPoint)
{
	return (rhPoint);
}

Fixed Point::getX() const
{
	return (this->x);
}

Fixed Point::getY() const
{
	return (this->y);
}

float Point::B_root(float x) const
{
	float root = x * 0.5;
	float temp = 0;

	while(temp != root)
	{
		temp = root;
		root = (root + (x / root)) * 0.5;
	}
	return (root);
}

float operator-(const Point &lhPoint, const Point &rhPoint)
{
	float diffX = lhPoint.getX().toFloat() - rhPoint.getX().toFloat();
	float diffY = lhPoint.getY().toFloat() - rhPoint.getY().toFloat();
	return (rhPoint.B_root(diffX * diffX + diffY * diffY));
}

float Point::calculate_sqMeters(Point const &a, Point const &b, Point const &c)
{
	float lenA = a - b;
	float lenB = b - c;
	float lenC = a - c;
	float s = (lenA + lenB + lenC)/2;
	float h = (2 * B_root(s*(s-lenA)*(s-lenB)*(s-lenC))) / lenC;
	return (lenC * h / 2);
}

bool Point::bsp(Point const &a, Point const &b, Point const &c, Point const &point)
{
	float sqMeters = 0;
	sqMeters += calculate_sqMeters(point, a, b);
	sqMeters += calculate_sqMeters(point, b, c);
	sqMeters += calculate_sqMeters(point, a, c);
	if (sqMeters <= calculate_sqMeters(a, b, c))
		return (true);
	return (false);
}