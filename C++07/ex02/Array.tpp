#ifndef ARRAY_TPP
#define ARRAY_TPP

template <class T>
Array<T>::Array(): arr(nullptr), nSize(0)
{
	// std::cout << __func__ << __LINE__ << std::endl;
}

template <class T>
Array<T>::Array(unsigned int n) : arr(new T[n]()), nSize(n)
{
	// std::cout << __func__ << __LINE__ << std::endl;
}

template <class T>
Array<T>::Array(Array const &other): arr(nullptr), nSize(0)
{
	// std::cout << __func__ << __LINE__ << std::endl;
	*this = other;
}

template <class T>
Array<T>::~Array()
{
	// std::cout << __func__ << __LINE__ << std::endl;
	delete [] this->arr;
}

template <class T>
Array<T> &Array<T>::operator=(Array const &other)
{
	// std::cout << __func__ << __LINE__ << std::endl;
	if (this == &other)
		return (*this);
	if (this->size() != other.size())
	{
		delete [] this->arr;
		this->arr = new T[other.size()]();
	}
	unsigned int i = 0;
	while (i < other.size())
	{
		this->arr[i] = other[i];
		i++;
	}
	this->nSize = other.size();
	return (*this);
}

template <class T>
T *Array<T>::getArrayPtr()
{
	// std::cout << __func__ << __LINE__ << std::endl;
	return (arr);
}

template <class T>
void Array<T>::setArrayPtr(T *tmp)
{
	// std::cout << __func__ << __LINE__ << std::endl;
	arr = tmp;
}

template <class T>
unsigned int Array<T>::size() const
{
	// std::cout << __func__ << __LINE__ << std::endl;
	return (nSize);
}

template <class T>
T &Array<T>::operator[](unsigned int i) const
{
	// std::cout << __func__ << __LINE__ << std::endl;
	if (i >= this->nSize)
		throw std::exception();
	return (arr[i]);
}

#endif