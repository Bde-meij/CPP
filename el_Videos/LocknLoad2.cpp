// class met 
// 'class' operator+(&arg)
// {
// 	vars + arg
// 	geef class terug
// }
// vars

// Main
// {
// 	class + iets
// }

#include <iostream>

class LocknLoad
{
	public:
	LocknLoad operator+(const int &i)
	{
		LocknLoad ll;
		ll.b = this->a + this->b + i;
		return (ll);
	}

	// private:
	int a;
	int b;
};

int main()
{
	LocknLoad ll;
	int lel = 7;
	ll.a = 10;
	ll.b = 5;
	std::cout << (ll + lel).b << std::endl;
}