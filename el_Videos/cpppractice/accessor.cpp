#include "accessor.hpp"

access::access()
{}

access::~access()
{}

int access::gett()
{
	return (this->val);
}

int access::comp(access *lolol)
{
	if (this->val != lolol->gett())
	{
		return (1);
	}
	return (0);
}

void access::sett(int i)
{
	this->val = i;
}

int main()
{
	access ok;
	access lolol;
	ok.sett(5);
	lolol.sett(5);
	cout << ok.gett() << endl;
	cout << ok.comp(&lolol) << endl;
	// cout << (ok == ok) << endl;
	cout << (&ok == &lolol) << endl;
}

// het enige verschil tussen een struct en een 
// class is de standaard toegangkelijkheid

// het enige verschil tussen een class en een 
// struct is de standaard toegangkelijkheid

// the only difference between a class and a struct is 
// default accessibility

// the only difference between a struct and a class is
// default accessibility

// struct is auto public, class auto private

// member is from out of class