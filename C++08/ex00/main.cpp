#include "easyfind.hpp"

int main()
{
	std::cout << "array test" << std::endl;
	{
		std::array<int, 5> container = {-1, 37, 98, -23, 5};
		easyfind(container, 37);
	}
	{
		std::array<int, 5> container = {-1, 37, 98, -23, 5};
		easyfind(container, -2546);
	}

	std::cout << "\nvector test" << std::endl;
	{
		std::vector <int> container = {-1, 37, 98, -23, 5};
		easyfind(container, 98);
	}
	{
		std::vector <int> container = {-1, 37, 98, -23, 5};
		easyfind(container, -500);
	}

	std::cout << "\ndeque test" << std::endl;
	{
		std::list <char> container = {'a', 'f', 't', 'k'};
		easyfind(container, 97);
	}
	{
		std::list <char> container = {'a', 'f', 't', 'k'};
		easyfind(container, 7);
	}

	std::cout << "\nforward_list test" << std::endl;
	{
		std::list <char> container = {'a', 'f', 't', 'k'};
		easyfind(container, 107);
	}
	{
		std::list <char> container = {'a', 'f', 't', 'k'};
		easyfind(container, 7);
	}

	std::cout << "\nlist test" << std::endl;
	{
		std::list <char> container = {'a', 'f', 't', 'k'};
		easyfind(container, 116);
	}
	{
		std::list <char> container = {'a', 'f', 't', 'k'};
		easyfind(container, 7);
	}
}

