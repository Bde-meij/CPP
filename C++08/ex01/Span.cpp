#include "Span.hpp"

Span::Span() : _maxN(0)
{
	// std::cout << __func__ << __LINE__ << std::endl;
}

Span::Span(unsigned int N) : _maxN(N)
{
	// std::cout << __func__ << __LINE__ << std::endl;
}

Span::Span(Span &span) : _maxN(0)
{
	// std::cout << __func__ << __LINE__ << std::endl;
	*this = span;
}

Span::~Span()
{
	std::cout << "span destroy" << std::endl;
}

Span &Span::operator=(Span &span)
{
	if (this == &span)
		return (*this);
	_maxN = span._maxN;
	_storedUInts = span._storedUInts;
	return (*this);
}

void Span::addNumber(long long int newElement)
{
	if (_storedUInts.size() >= _maxN)
		throw std::runtime_error("cannot add, vector full");
	_storedUInts.push_back(newElement);
}

long long int Span::shortestSpan()
{
	if (_storedUInts.size() < 2)
		return (0);
	std::vector<long long int> sortNum = _storedUInts;
	std::vector<long long int>::iterator it = sortNum.begin();
	std::sort(sortNum.begin(), sortNum.end());
	long long int shortest = abs(*(it+1) - *it);
	while ((it + 1) < sortNum.end())
	{
		if (abs(*(it+1) - *it) < shortest)
			shortest = abs(*(it+1) - *it);
		it++;
	}
	return (shortest);
}

long long int Span::longestSpan()
{
	if (_storedUInts.size() < 2)
		return (0);
	std::vector<long long int> sortNum = _storedUInts;
	std::sort(sortNum.begin(), sortNum.end());

	return (abs(sortNum.back() - sortNum.front()));
}
