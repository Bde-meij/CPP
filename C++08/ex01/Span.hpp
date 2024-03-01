#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

class Span
{
	public:
	Span();
	Span(unsigned int N);
	Span(Span &span);
	Span &operator=(Span &span);
	~Span();

	void addNumber(long long int newElement);
	long long int shortestSpan();
	long long int longestSpan();

	template <typename T>
	void addRange(T begin, T end)
	{
		if (end - begin > _maxN)
			throw std::runtime_error("out of range");
		T it = begin;
		while (it != end)
		{
			_storedUInts.push_back(it);
			it++;
		}
	}

	private:
	unsigned int _maxN;
	std::vector<long long int> _storedUInts;
};

#endif