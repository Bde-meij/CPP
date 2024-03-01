#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <cstdlib>

template <class T>
class Array
{
	public:
	Array();
	Array(unsigned int n);
	Array(Array const &other);
	~Array();


	Array &operator=(Array const &other);
	T &operator[](unsigned int i) const;

	unsigned int size() const;

	T *getArrayPtr();
	void setArrayPtr(T *tmp);

	private:
	T *arr;
	unsigned int nSize;
};

#include "Array.tpp"

#endif