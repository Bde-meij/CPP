#include <iostream>
#include "publicprivate.hpp"

// private is alleen op te roepen / aan te passen binnen zijn eigen definities
// niet vanuit main bijv
// const is helemaal niet aan te passen

Soomple::Soomple()
{
	this->publicFool = 0;
	this->privateFool = 0;
	std::cout << "vars set to 0, Soomple online\n";
	std::cout << "publicFool = " << this->publicFool << '\n';
	std::cout << "privateFool = " << this->privateFool << '\n';
	Soomple::privateBoar();
}

void Soomple::publicBoar()
{
	this->publicFool = 1;
	this->privateFool = 1;
	std::cout << "publicboar sets vars to 1\n";
	std::cout << "publicFool = " << this->publicFool << '\n';
	std::cout << "privateFool = " << this->privateFool << '\n';
	this->privateBoar();
}

void Soomple::privateBoar()
{
	this->publicFool = 2;
	this->privateFool = 2;
	std::cout << "privateboar sets vars to 2\n";
	std::cout << "publicFool = " << this->publicFool << '\n';
	std::cout << "privateFool = " << this->privateFool << '\n';
}

Soomple::~Soomple()
{
	std::cout << "Soomple terminated\n";
}

int main()
{
	Soomple skellor;
	skellor.publicBoar();
	skellor.publicFool =134;
	// skellor.privateFool =134;
}