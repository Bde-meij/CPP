#include <iostream>

 // endline werkt als \n maar dan op alle systemen
 // >> en << lijken op append in bash, te gebruiken 
 // om de input en output te redirecten

int main()
{
	char buff[512];

	std::cout << "argarg" << std::endl;
	std::cin >> buff;
	std::cout << buff;
}
