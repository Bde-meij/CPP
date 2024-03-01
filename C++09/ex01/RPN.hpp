#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <deque>

class RPN
{
	public:
	RPN();
	RPN(std::string input);
	RPN(const RPN &RPN);
	RPN &operator=(const RPN &RPN);
	~RPN();

	bool inputCheck();
	void calculate();

	private:
	int (*_ops[6])(int,int);
	std::string _input;
};

#endif