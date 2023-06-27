#ifndef POINT_HPP
#define POINT_HPP

#include "iostream"
#include "Fixed.hpp"

class Point
{
	public:
		Point();
		Point(float a, float b);
		Point(Point &point);
		~Point();
		Point &operator=(Point &rhPoint);
		Fixed getX() const;
		Fixed getY() const;
		bool bsp(Point const &a, Point const &b, Point const &c, Point const &point);
		float calculate_sqMeters(Point const &a, Point const &b, Point const &c);
		float B_root(float x) const;

	private:
		Fixed const x;
		Fixed const y;
};

float operator-(const Point &lhPoint, const Point &rhPoint);

#endif