#include <iostream>
#include <unistd.h>
#include "haha.hpp"

class skellor
{
	public:
	char *tellert;
	void printor();
	skellor(char *varrie);
	~skellor();
};

skellor::skellor(char *varrie) : tellert(varrie)// wat je doet tijdens de constructie
{
	std::cout << "silence you fool!\n";
}

skellor::~skellor() // wat je doet tijdens de vernietiging
{
	std::cout << "fool has been silenced\n";
}

void skellor::printor()
{
	std::cout << this->tellert << "\n";
}

int main()
{
	skellor mastersOfTheUniverse("but.. but.."); // constructor wordt automatisch opgeroepen
	mastersOfTheUniverse.printor();
	sleep(3);
	// vanaf hier alles op te roepen met naam.arg
	return 0; // de destructor wordt automatisch opgeroepen
}
