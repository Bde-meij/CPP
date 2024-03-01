#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <algorithm>
#include <iostream>
#include <vector>
#include <array>
#include <list>

template <typename T> 
int easyfind(T container, int findThis)
{
	int retval = 0;
	for (auto &i : container)
	{
		if (i == findThis)
			return (std::cout << "first occurrence at position: " << retval << std::endl, retval);
		retval++;
	}
	return (std::cout << "no occurrence found" << std::endl, -1);
};

#endif