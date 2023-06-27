#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
	public:
		Contact();
		~Contact();

		std::string GetFirstName();
		std::string GetLastName();
		std::string GetNickName();
		std::string GetPhoneNumber();
		std::string GetDarkestSecret();

		std::string ModStr(std::string str);
		void PrintNameCollumn();
		void ClearContact();
		void PrintContact();
		int CheckEmpty();

		void SetFirstName(std::string);
		void SetLastName(std::string);
		void SetNickName(std::string);
		void SetPhoneNumber(std::string);
		void SetDarkestSecret(std::string);

	private:
		std::string FirstName;
		std::string LastName;
		std::string NickName;
		std::string PhoneNumber;
		std::string DarkestSecret;
};

#endif