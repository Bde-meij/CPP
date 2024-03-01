#include "MutantStack.hpp"
#include <iostream>

int main()
{
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::stack<int> s(mstack);
	}

	{
		MutantStack<int> mstack;
		std::deque<int> rstack;

		mstack.push(5);
		rstack.push_front(5);

		std::cout << "pushed 5" << std::endl;

		mstack.push(17);
		rstack.push_back(17);

		std::cout << "pushed 17" << std::endl;

		std::cout << "mstack top: " << mstack.top() << std::endl;
		std::cout << "rstack top: " << rstack.back() << std::endl;

		mstack.pop();
		rstack.pop_back();

		std::cout << "popped" << std::endl;

		std::cout << "mstack top: " << mstack.top() << std::endl;
		std::cout << "rstack top: " << rstack.back() << std::endl;

		mstack.push(3);
		rstack.push_back(3);

		std::cout << "pushed 3" << std::endl;

		std::cout << "mstack top: " << mstack.top() << std::endl;
		std::cout << "rstack top: " << rstack.back() << std::endl;

		std::cout << "mstack: ";
		for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it) {
			std::cout << *it << ' ';
		}
		std::cout << std::endl;

		std::cout << "rstack: ";
		for (std::deque<int>::iterator it = rstack.begin(); it != rstack.end(); ++it) {
			std::cout << *it << ' ';
		}
		std::cout << std::endl;

		std::cout << "mstack size: " << mstack.size() << std::endl;
		std::stack<int> s(mstack);
		for (size_t i = 0; !s.empty(); ++i)
		 {
			std::cout << "s.top(): " << s.top() << std::endl;
			s.pop();
    		}
	}
}