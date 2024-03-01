#include <stdlib.h>
#include <time.h>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
	srand (time(NULL));
	int i = rand() % 3;
	if (i == 0)
	{
		std::cout << "type to find is A" << std::endl;
		return(new A);
	}
	if (i == 1)
	{
		std::cout << "type to find is B" << std::endl;
		return(new B);
	}
	else
	{
		std::cout << "type to find is C" << std::endl;
		return(new C);
	}
}

void identify(Base *p)
{
	std::cout << "with pointer " << p << std::endl;

	if (dynamic_cast<A*>(p))
		std::cout << "type = A " << p << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "type = B " << p << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "type = C " << p << std::endl;
	else
		std::cout << "cannot identify type" << std::endl;
}

void identify(Base &p)
{
	std::cout << "with address " << &p << std::endl;
	try
	{
		p = dynamic_cast<A&>(p);
		std::cout << "type = A " << &p << std::endl;
	}
	catch (std::exception &e)
	{
		try
		{
			p = dynamic_cast<B&>(p);
			std::cout << "type = B " << &p << std::endl;
		}
		catch (std::exception &e)
		{
			try
			{
				p = dynamic_cast<C&>(p);
				std::cout << "type = C " << &p << std::endl;
			}
			catch (std::exception &e)
			{
				std::cout << "cannot identify type" << std::endl;
			}
		}
	}
}

int main()
{
	Base *randomBase = generate();
	identify(randomBase);
	identify(*randomBase);
	delete(randomBase);
}