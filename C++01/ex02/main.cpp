#include <iostream>

// the point is; 
// *a = &b is same operation as &a = b

// also,

// void *a
// func(a) -> void func(void *a)

// equals

// void a
// func(&a) -> void func(void *a)

// equals

// void a
// func(a) -> void func(void &a)

int main()
{
	std::string brainMessage = "HI THIS IS BRAIN";
	std::string *stringPTR = &brainMessage;
	std::string &stringREF = brainMessage;

	// brainMessage = "HI";
	// *stringPTR = "HA";
	// stringREF = "HO";

	std::cout << &brainMessage 
	<< std::endl
	<< stringPTR 
	<< std::endl
	<< &stringREF
	<< std::endl;

	std::cout << std::endl;

	std::cout << brainMessage 
	<< std::endl
	<< *stringPTR 
	<< std::endl
	<< stringREF
	<< std::endl;
}