#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>

// int arie[10]; // stack
// int *b = new int[10]; // dynamic memory, heap, needs delete
// array of 10 int uses (int)4 x (arraylen)10 bytes of contiguous memory
// because of this very fast access to elements; arie + n * sizeof(type) gives nth element
// could not have been done with gaps in memory.
// however using arrays is very manual, one could access out of range data
// arie[17] = 90;

// std::array<int, 10> arie;
// the different option available
// for (i = 0; i < 10; i++)
// 	arie[i] = 5;
// for (std::arryay<int, 10>::iterator i = arie.begin(); i != arie.end(); ++i)
// 	*i = 5;
// for (auto i = arie.begin(); i != arie.end(); ++i)
// 	*i = 5;
// for (auto i : arie)
// 	*i = 5;
// for (auto &i : arie)
// 	i = 5;


int main()
{
	// arrays are easy, flexible and save
	// but we need to know the size in advance one way or another
	std::array<int, 10> arie;
	for (auto &i : arie)
		i = 5;
	for (auto &i : arie)
		std::cout << i << std::endl;

	// vectors dont need size beforehand (can be sized though), they will add mem with pushbacks
	// mem will be contiguous *until current memblock full* at which point
	// it will find a bigger memory block and copy everything over and add further pushbacks there
	// *huge problem if you had a pointer to previous mem-block*

	std::vector<int> veccie;
	for (int i = 0; i < 10; i++)
		veccie.push_back(5);
	for (auto &i : veccie)
		std::cout << i << std::endl;
	std::cout << veccie[3] << std::endl;

	// lists are usefull when often removing and adding elements
	// time needed to add and remove stays roughly the same
	// lists find a new place in memory with each pushback (not contiguous)
	// and are linked with *previous and *next pointers
	// removing a list (a c++ class std::list<> mind you)
	// rejoins the 'broken' prev an next pointers appropriately
	// you cannot know the size unless you iterate through it and count
	// also indexing is not possible

	std::list<int> lizzie;
	for (int i = 0; i < 10; i++)
	{
		lizzie.push_back(5);
		if (i == 3)
			lizzie.push_back(8);
	}
	for (auto &i : lizzie)
	{
		std::cout << i << std::endl;
		if (i == 8)
			std::cout << "manually found 8" << std::endl;
	}

	// somtin bout dq, can be viewed as a list of arrays
	// in terms of memory management. array until mem full,
	// find new mem-block refered to with pointer.
	// indexing for a deque is twice as costly as for a standard vect

	std::deque<int> dakkah;
	dakkah.push_back(1);
	dakkah.push_back(1);
	dakkah.push_back(1);
	dakkah.push_back(1);
	dakkah.push_back(1);
	dakkah.push_back(1);
	for (auto &i : dakkah)
		std::cout <<"dakakakakaka"<<std::endl;
	
	// sets have to contain unique items and
	// will also be ordered. therefore no front or
	// back to add to, just insert. 
	// it will not store any doubles

	std::set<int> setokaiba;
	setokaiba.insert(4578);
	setokaiba.insert(4578);
	setokaiba.insert(4578);
	setokaiba.insert(4578);
	setokaiba.insert(4578);
	setokaiba.insert(4578);
	setokaiba.insert(4578);
	setokaiba.insert(2);

	for (auto &i : setokaiba)
		std::cout << i << std::endl;
	std::cout << std::endl;

	// u_set wants unique but doesnt care about order
	
	std::unordered_set<int> uSet;
	uSet.insert(4578);
	uSet.insert(7);
	uSet.insert(4578);
	uSet.insert(4578);
	uSet.insert(5);
	uSet.insert(5);
	uSet.insert(5);
	uSet.insert(1243);
	uSet.insert(2);

	for (auto &i : uSet)
		std::cout << i << std::endl;

	// into maps! map has pairs of data
	// which are accessible through ".first" and ".second"
	// can be ordered or unordered like deque,
	// order depends on ".first"

	std::unordered_map<int, std::string> meppie;
	meppie[5] = "sheven";
	meppie[1] = "one";
	meppie[3] = "three";
	meppie[2] = "two";

	for (auto &i : meppie)
		std::cout << i.first << std::endl;
}

// c++ -Wall -Werror -Wextra arie.cpp