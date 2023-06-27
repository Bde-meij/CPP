#include <iostream>


class one 
{
	public:
	one();
	~one();

	protected:
	int _one;
};

one::one() : _one(1)
{
	std::cout << "one constructed" << std::endl;
}
one::~one()
{
	std::cout << "one destroyed" << std::endl;
}

class two : virtual public one
{
	public:
	two();
	~two();

	protected:
	int _two;
};

two::two() : _two(2)
{
	std::cout << "two constructed" << std::endl;
	one::_one+=2;
	std::cout << one::_one << std::endl;
}
two::~two()
{
	std::cout << "two destroyed" << std::endl;
}

class three : virtual public one
{
	public:
	three();
	~three();

	protected:
	int _three;
};

three::three() : _three(3)
{
	std::cout << "three constructed" << std::endl;
	one::_one+=3;
	std::cout << one::_one << std::endl;
}
three::~three()
{
	std::cout << "three destroyed" << std::endl;
}

class four : public three, public two
{
	public:
	four();
	~four();

	protected:
	int _four;
};

four::four() : _four(4)
{
	std::cout << "four constructed" << std::endl;	
	std::cout << one::_one + two::_two + three::_three + this->_four << std::endl;	
}
four::~four()
{
	std::cout << "four destroyed" << std::endl;
}

int main()
{
	four A;
}
