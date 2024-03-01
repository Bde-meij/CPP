#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
	private:
		class Contact Contact[8];
		class Contact TempContact;
		int	ContactNum;
		int CheckIfNumberGood(int *i);
		void ADD();
		void SEARCH();
		void EXIT();
};

#endif