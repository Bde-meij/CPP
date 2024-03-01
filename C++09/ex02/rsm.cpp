#include "PmergeMe.hpp"

void PmergeMe::recursiveSortForMerge(std::vector <std::pair<int, int>> &_pairVec, int n)
{
	if (n < 2)
		return ;

	int leftLen = n/2;
	int rightLen = n - leftLen;
	std::vector <std::pair<int, int>> leftVec;
	std::vector <std::pair<int, int>> rightVec;

	for (int i = 0; i < leftLen; i++)
		leftVec.push_back(_pairVec[i]);
	for (int i = 0; i < rightLen; i++)
		rightVec.push_back(_pairVec[leftLen+i]);

	recursiveSortForMerge(leftVec, leftLen);
	recursiveSortForMerge(rightVec, rightLen);
	merge(_pairVec, leftVec, rightVec, leftLen, rightLen);
}

void PmergeMe::merge(std::vector <std::pair<int, int>> &_pairVec, std::vector <std::pair<int, int>> leftVec, \
std::vector <std::pair<int, int>> rightVec, \
int leftLen, int rightLen)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (i < leftLen && j < rightLen)
	{
		if (leftVec[i].second < rightVec[j].second)
		{
			_pairVec[k] = leftVec[i];
			i++;
		}
		else
		{
			_pairVec[k] = rightVec[j];
			j++;
		}
		k++;
		_recSortN++;
	}
	while (i < leftLen)
	{
		_pairVec[k] = leftVec[i];
		i++;
		k++;
	}
	while (j < rightLen)
	{
		_pairVec[k] = rightVec[j];
		j++;
		k++;
	}
}