#ifndef nok
#define nok

#include <iostream>
using namespace std;

class access
{
	public:
	access();
	~access();
	int gett(void);
	void sett(int);
	int comp(access *lolol);

	private:
	int val;
};

#endif