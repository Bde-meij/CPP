#include <iostream>
#include <string>
using namespace std;

int main()
{
	try 
	{
		int age = 15;
		if (age >= 18)
			cout << "Access granted - you are old enough.";
		else 
			throw ("adfh");
	}
	catch (char const*str) {
	cout << "Access denied - You must be at least 18 years old.\n";
	cout << "Age is: " << str;
	}
}