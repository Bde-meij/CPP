#include "pointars.hpp"

bucketlord::bucketlord()
{}

bucketlord::~bucketlord()
{}

void bucketlord::naise()
{
	cout << "mooooo";
}

// int main()
// {
// 	bucketlord inst;
// 	bucketlord *instp = &inst;
// 	int bucketlord::*yolo = &bucketlord::mayo;

// 	void (bucketlord::*f)() = &bucketlord::naise;

// 	inst.*yolo = 4;
// 	cout << inst.*yolo<<"\n";
// 	instp->*yolo = 7;
// 	cout << inst.*yolo<<"\n";
// 	(inst.*f)();
// 	(instp->*f)();
// }

// #include <iostream>     // std::cout, std::endl
// #include <iomanip>      // std::setw

// int main () {
//   std::cout << std::setw(2);
//   std::cout << "a" << std::endl;
// }

#include <iostream>     // std::cout
#include <iterator>     // std::reverse_iterator
#include <vector>       // std::vector

int main ()
{
	string vecvec = "1111111";
	vecvec.resize(10, ' ');
	string::reverse_iterator ent (vecvec.end());
	string::reverse_iterator start (vecvec.begin());
	while (*ent != *start)
	{
		std::cout << *ent;
		ent--;
	}
	std::cout << '|';
	return 0;
}
// reverse_iterator example
#include <iostream>     // std::cout
#include <iterator>     // std::reverse_iterator
#include <vector>       // std::vector

// using namespace std

// string str = "hallo";
// cout << str;

// at(i) == [i]
// lol.length() == strlen(lol)

// int main()
// {
// 	int i = 5;
// 	string lol = "1923456789";
	// while (i> 0)
	// {
		// cout << lol.length();
		// string::reverse_iterator<lol> it;
		// it = lol;
		// it;
		// while (it <= lol.length())
		// {
		// 	cout << *it;
		// 	i++;
		// }
	// 	i--;
	// }
// }
