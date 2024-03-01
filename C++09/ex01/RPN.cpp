#include "RPN.hpp"

int multi(int a, int b)  
{ return a * b; }

int plus(int a, int b) 
{ return a + b; }

int minus(int a, int b) 
{ return a - b; }

int divide(int a, int b) 
{ return a / b; }

RPN::RPN()
{
	std::cout << __FUNCTION__ << " called" << std::endl;
	std::cout << "insufficient args, aborting..." << std::endl;
}

RPN::RPN(std::string input) : _input(input)
{
	_ops[0] = &multi;
	_ops[1] = &plus;
	_ops[3] = &minus;
	_ops[5] = &divide;
	if (!inputCheck())
		calculate();
}

RPN::RPN(const RPN &other)
{
	*this = other;
}

RPN &RPN::operator=(const RPN &other)
{
	if (this == &other)
		return (*this);
	this->_input = other._input;
	return (*this);
}

RPN::~RPN()
{
	std::cout << __FUNCTION__ << " called" << std::endl;
}


bool RPN::inputCheck()
{
	size_t i = 0;
	while (i < _input.size())
	{
		if (i % 2 == 1)
		{
			if (_input[i] != ' ')
				return (std::cout << "error: incorrect spacing" << std::endl, 1);
		}
		else if ((!isdigit(_input[i])) && (_input[i] != '/') && (_input[i] != '*') &&\
		(_input[i] != '-') && (_input[i] != '+'))
			return (std::cout << "error: unrecognized character" << std::endl, 1);
		i++;
	}
	return (0);
}

void RPN::calculate()
{
	std::deque<int> deck;
	int a = 0;
	int b = 0;
	size_t i = 0;

	while (i < _input.size())
	{
		if ((_input[i] == '+') || (_input[i] == '-') || (_input[i] == '*') ||\
		 	(_input[i] == '/'))
			{
				if (deck.size() < 2)
				{
					std::cout << "error: incorrectly formatted" << std::endl;
					return ;
				}
				else
				{
					b = deck.back();
					deck.pop_back();
					a = deck.back();
					deck.pop_back();
					deck.push_back(_ops[_input[i] - 42](a, b));
				}
			}
		if (isdigit(_input[i]))
			deck.push_back(_input[i] - 48);
		i++;
	}
	if (deck.size() != 1)
	{
		std::cout << "error: incorrectly formatted" << std::endl;
		return ;
	}
	std::cout << "result: " << deck[0] << std::endl;
}