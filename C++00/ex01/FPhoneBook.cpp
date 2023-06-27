#include "Contact.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->ContactNum = 0;
	std::string str;
	while (str != "EXIT")
	{
		std::cout 	<< "welcome to phonebook!"
					<< std::endl
					<< "Choose ADD, SEARCH or EXIT"
					<< std::endl;
		std::getline(std::cin, str);
		if (std::cin.eof())
			exit (0);
		if (str == "ADD")
			this->ADD();
		else if (str == "SEARCH")
			this->SEARCH();
		else if (str != "EXIT")
		{
			std::cout	<< "cannot read input"
						<< std::endl
						<< "restarting...'"
						<< std::endl;
		}
	}
	this->EXIT();
}

PhoneBook::~PhoneBook()
{}

void PhoneBook::ADD()
{
	std::string str;
	int num = (this->ContactNum % 8);
	std::cout << "enter firstname" << std::endl;
	std::getline(std::cin, str);
	this->TempContact.SetFirstName(str);
	std::cout << "enter lastname" << std::endl;
	std::getline(std::cin, str);
	this->TempContact.SetLastName(str);
	std::cout << "enter nickname" << std::endl;
	std::getline(std::cin, str);
	this->TempContact.SetNickName(str);
	std::cout << "enter phonenumber" << std::endl;
	std::getline(std::cin, str);
	this->TempContact.SetPhoneNumber(str);
	std::cout << "enter darkestsecret" << std::endl;
	std::getline(std::cin, str);
	this->TempContact.SetDarkestSecret(str);
	if (this->TempContact.CheckEmpty())
		return ;
	this->Contact[num] = this->TempContact;
	this->ContactNum++;
	return ;
}

int PhoneBook::CheckIfNumberGood(int *i)
{
	std::string id_num;
	std::getline(std::cin, id_num);
	if (std::isdigit(id_num[0]) && !id_num[1])
			*i = std::stoi(id_num);
	else
		*i = -1;
	if ((*i < 9) && (*i > 0))
	{
		if (this->Contact[*i - 1].GetFirstName().length() > 0)
			return (1);
		else
			std::cout 	<< "Chosen contact is empty," 
						<< std::endl
						<< "returning to Phonebook"
						<< std::endl;
	}
	else
		std::cout 	<< "Chosen number is out of bounds,"
					<< std::endl
					<< "returning to PhoneBook" 
					<< std::endl;
	return (0);
}

void PhoneBook::SEARCH()
{
	int i = 0;
	while (i < 8)
	{
		std::cout << i+1 << "|";
		this->Contact[i].PrintNameCollumn();
		std::cout << std::endl;
		i++;
	}
	std::cout << "choose your character! (type '1' up to '8')" << std::endl;
	if (this->CheckIfNumberGood(&i))
		this->Contact[i - 1].PrintContact();
	return ;
}

void PhoneBook::EXIT()
{
	exit (0);
}
