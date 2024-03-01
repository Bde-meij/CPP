#ifndef ITER_HPP
#define ITER_HPP

#include <stdlib.h>
#include <iostream>

template<typename T> void iter(T *arr, long long int len, void (*function)(T &arr))
{
	long long int i = 0;
	if ((arr) && (len > 0))
	{
		while (i < len)
		{
			if (!arr[i])
			{
				std::cout << "warning: array smaller than given length" << std::endl;
				break ;
			}
			function(arr[i]);
			i++;
		}
	}
};

template<typename T> void iter(T *arr, long long int len, void (*function)(T const &arr))
{
	long long int i = 0;
	if ((arr) && (len > 0))
	{
		while (i < len)
		{
			if (!arr[i])
			{
				std::cout << "warning: array smaller than given length" << std::endl;
				break ;
			}
			function(arr[i]);
			i++;
		}
	}
};

#endif