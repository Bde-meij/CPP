#include "iter.hpp"
#include <iostream>

void bestFunctionEver(char &c)
{
	c = 'a';
}
void bestFunctionEver(int &i)
{
	i = 6;
}

void bestFunctionEverTwo(char const &c)
{
	std::cout << c << std::endl;
}

void bestFunctionEverTwo(int const &i)
{
	std::cout << i << std::endl;
}

// class Awesome
// {
//   public:
//     Awesome( void ) : _n( 42 ) { return; }
//     int get( void ) const { return this->_n; }
//   private:
//     int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

// template< typename T >
// void print( T const & x ) { std::cout << x << std::endl; return; }

// int main() {
//   int tab[] = { 0, 1, 2, 3, 4 };  // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
//   Awesome tab2[5];

//   iter( tab, 5, print<int> );
//   iter( tab2, 5, print<Awesome> );

//   return 0;
// }

int main()
{
	{
		std::cout << std::endl;
        std::cout << "non-const to const" << std::endl;
		char str[] = "bbb\0bbb";
		iter(str, 7, bestFunctionEver);
		std::cout << str << std::endl;
		iter(str, 7, bestFunctionEverTwo);
	}
	{
		std::cout << std::endl;
        std::cout << "const to non-const" << std::endl;
		char str[] = "bbb\0bbb";
		iter(str, 7, bestFunctionEverTwo);
		iter(str, 7, bestFunctionEver);
		std::cout << str << std::endl;
	}
	{
		std::cout << std::endl;
        std::cout << "testing int type" << std::endl;
		int i[4];
		iter(i, 5151, bestFunctionEver);
		iter(i, 5151, bestFunctionEverTwo);
	}
	{
		std::cout << std::endl;
        std::cout << "testing wrong length" << std::endl;
		int i[4];
		iter(i, 9, bestFunctionEver);
		iter(i, -15, bestFunctionEverTwo);
	}
	{
		std::cout << std::endl;
        std::cout << "testing nullptr" << std::endl;
		int *i = nullptr;
		iter(i, 7, bestFunctionEver);
		iter(i, 7, bestFunctionEverTwo);
	}
	{
		std::cout << std::endl;
        std::cout << "testing NULL" << std::endl;
		int *i = NULL;
		iter(i, 7, bestFunctionEver);
		iter(i, 7, bestFunctionEverTwo);
	}
}
