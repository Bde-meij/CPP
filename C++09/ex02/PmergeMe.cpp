#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{

}

PmergeMe::PmergeMe(const PmergeMe &other)
{
	*this = other;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
	if (this == &other)
		return (*this);
	_comparisons = other._comparisons;
	_finalVec = other._finalVec;
	_finalList = other._finalList;
	_pairVec = other._pairVec;
	_pairList = other._pairList;
	return (*this);
}

PmergeMe::~PmergeMe()
{
	std::cout << __FUNCTION__ << " called" <<std::endl;
}

PmergeMe::PmergeMe(int ac, char **av) : _comparisons(0), _recSortN(0)
{
	int i = ac;
	std::vector<int> intVec;
	
	for (int a = 1; a < i; a++)
		intVec.push_back(atoi(av[a]));
	i--;

	std::cout << i << " numbers given:" << std::endl;
	for (auto &vi : intVec)
		std::cout << vi << " ";
	std::cout << std::endl;
	if (i <= 56)
		std::cout << "comparisons allowed = " << compArr[i-1] << std::endl;
	makePairs(intVec, i);
	
	// showPairs();
	vectorStart(intVec, i);
	listStart(intVec, i);
	// showPairs();
}

void PmergeMe::makePairs(std::vector<int> intVec, size_t i)
{
	std::pair<int, int> tmpPair;

	for (size_t a = 0; (a + 1) < i; a+=2)
	{
		if (intVec[a] < intVec[a+1])
		{
			tmpPair.first = intVec[a];
			tmpPair.second = intVec[a+1];
		}
		else
		{
			tmpPair.first = intVec[a+1];
			tmpPair.second = intVec[a];
		}
		_pairVec.push_back(tmpPair);
		std::swap(tmpPair.first, tmpPair.second);
		_pairList.push_back(tmpPair);
	}
}

void PmergeMe::showPairs()
{
	std::cout << "\nvectorPairs:\n";
	for (auto &pv : _pairVec)
		std::cout << pv.first << " " << pv.second << std::endl;
	std::cout << "\nlistPairs:\n";
	for (auto &pl : _pairList)
		std::cout << pl.first << " " << pl.second << std::endl;
}

size_t PmergeMe::jacob(size_t x)
{
	return ((pow(2, x) - pow(-1, x)) / 3);
}

