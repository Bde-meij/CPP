#include <iostream>
#include "sampleClass.hpp"

Soomple::Soomple(void)
{
	std::cout << "construy\n";
}
Soomple::~Soomple(void)
{
	std::cout << "destruy~\n";
}

int main()
{
	Soomple();
	Soomple aars;
	aars;
	aars;
	aars;
}