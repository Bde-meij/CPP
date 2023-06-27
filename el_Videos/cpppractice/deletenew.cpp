#include "deletenew.hpp"

using namespace std;

jep::jep()
{
	// this->flap = _flap;
	cout << "con " << this->flap << endl;
}

jep::~jep()
{
	cout << "des " << this->flap << endl;
}

int main()
{
	// jep flip();
	jep *floep = new jep[23];
	delete []floep;
}

// new calls the constructor of a class
// delete calls the destructor of a class

// on 'exit' destructors are not called
// when new has been used to instantiate 
// the delete has to be used to initiate destructor

// * = new
// * = new 
// * = new 
// * = new 
// * = new 
// * = new

// delete *
// delete *
// delete *
// delete * 
// delete *
// delete *

// * = new[24]
// * = new[24] 
// * = new[24]
// * = new[24]
// * = new[24]
// * = new[24]

// delete [] *
// delete [] *
// delete [] *
// delete [] *
// delete [] * 
// delete [] *
