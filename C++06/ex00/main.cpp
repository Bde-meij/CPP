#include "ScalarConverter.hpp"
#include <typeinfo>

int main(int ac, char **av)
{
	if (ac != 2)
		return (std::cout << "need one argument to execute, try again" << std::endl, 1);
	ScalarConverter::convert(av[1]);
}

// test: 
// echo 1:70; ./convert 70; echo '\n';
// echo 2:234; ./convert 234; echo '\n';
// echo 3:rweg; ./convert rweg; echo '\n';
// echo 4:0; ./convert 0; echo '\n';
// echo 5:23.1559999364742; ./convert 23.1559999364742; echo '\n';
// echo 6:-inf; ./convert -inf; echo '\n';
// echo 7:-inff; ./convert -inff; echo '\n';
// echo 8:+inf; ./convert +inf; echo '\n';
// echo 9:+inff; ./convert +inff; echo '\n';
// echo 10:inf; ./convert inf; echo '\n';
// echo 11:inff; ./convert inff; echo '\n';
// echo 12:nan; ./convert nan; echo '\n';
// echo 13:nanf; ./convert nanf; echo '\n';
// echo 14:-70; ./convert -70; echo '\n';
// echo 15:-234; ./convert -234; echo '\n';
// echo 16:-rweg; ./convert -rweg; echo '\n'
// echo 17:-23.13548599364742; ./convert -23.13548599364742; echo '\n'
// echo 18:a; ./convert a; echo '\n'
// echo 19:b; ./convert b; echo '\n'
// echo 20:-a; ./convert -a; echo '\n'
// echo 21:-2b; ./convert -2b; echo '\n'
// echo 22:'a'; ./convert 'a'; echo '\n'
// echo 23:\*; ./convert \*; echo '\n'
// echo 24:'7'; ./convert '7'; echo '\n'
// echo 25:1.1.1; ./convert 1.1.1; echo '\n'
// echo 26:1a1.1; ./convert 1a1.1; echo '\n'
// echo 27:1.10y; ./convert 1.10y