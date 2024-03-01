#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
	MutantStack() {}
	~MutantStack() {}
	MutantStack(const MutantStack& mutant)
	{
		*this = mutant;
	}

	MutantStack<T>& operator=(const MutantStack& mutant) 
	{
		// stack t already has an operator= overload
		this->operator=(mutant);
	}

	// why both?
	// std::stack<T>::container_type::iterator might resolve into a type, or a value
	// with typename you tell the compiler it will be a type
	// one cannot compile "value" "varname" (5 i)
	// its okay to compile "type" "varname"	(int i)

	// however, 'varname' itself is now a value and not a type
	// we want the type of 'varname' and redifine that to a new name using typedef
	// in other words we want to define a 'typename' 
	// (which is not done by the typename operator, which is terrible)

	// typename "this will be a type"
	// typedef "type_whatever" will be called: "iterator" 
	typedef typename std::stack<T>::container_type::iterator iterator;


	// the underlying container of stack is accessible with 'c'
	// thus we can use its begin() and end() functions to return an iterator
	iterator begin() 
	{
		return this->c.begin();
	}

	iterator end() 
	{
		return this->c.end();
	}
};

#endif
