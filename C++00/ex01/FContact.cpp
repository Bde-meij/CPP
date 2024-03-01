#include "Contact.hpp"

Contact::Contact()
{}

Contact::~Contact()
{}

std::string Contact::GetFirstName()
{
	return (this->FirstName);
}

std::string Contact::GetLastName()
{
	return (this->LastName);
}

std::string Contact::GetNickName()
{
	return (this->NickName);
}

std::string Contact::GetPhoneNumber()
{
	return (this->PhoneNumber);
}

std::string Contact::GetDarkestSecret()
{
	return (this->DarkestSecret);
}

void Contact::SetFirstName(std::string firstname)
{
	this->FirstName = firstname;
}

void Contact::SetLastName(std::string lastname)
{
	this->LastName = lastname;
}

void Contact::SetNickName(std::string nickname)
{
	this->NickName = nickname;
}

void Contact::SetPhoneNumber(std::string phonenumber)
{
	this->PhoneNumber = phonenumber;
}

void Contact::SetDarkestSecret(std::string darkestsecret)
{
	this->DarkestSecret = darkestsecret;
}

int Contact::CheckEmpty()
{
	if ((this->FirstName.length() == 0) ||
		(this->LastName.length() == 0) ||
		(this->NickName.length() == 0) ||
		(this->PhoneNumber.length() == 0) ||
		(this->DarkestSecret.length() == 0))
	{
		std::cout 	<< "error, a field was not set"
					<< std::endl
					<< "deleting contact.."
					<< std::endl;
		this->ClearContact();
		return (1);
	}
	return (0);
}

void Contact::ClearContact()
{
	this->FirstName.clear();
	this->LastName.clear();
	this->NickName.clear();
	this->PhoneNumber.clear();
	this->DarkestSecret.clear();
}

std::string Contact::ModStr(std::string str)
{
	std::string		aligned_str;
	size_t			i;

	if (str.length() > 10)
	{
		str[9] = '.';
		str.resize(10);
		return (str);
	}
	aligned_str.resize(10, ' ');
	i = 1;
	while (i <= str.length())
	{
		aligned_str[aligned_str.length() - i] = str[str.length() - i];
		i++;
	}
	return (aligned_str);
}

void Contact::PrintNameCollumn()
{
	std::cout << Contact::ModStr(this->GetFirstName()) << "|";
	std::cout << Contact::ModStr(this->GetLastName()) << "|";
	std::cout << Contact::ModStr(this->GetNickName()) << "|";
}

void Contact::PrintContact()
{
	std::cout << this->GetFirstName() << std::endl;
	std::cout << this->GetLastName() << std::endl;
	std::cout << this->GetNickName() << std::endl;
	std::cout << this->GetPhoneNumber() << std::endl;
	std::cout << this->GetDarkestSecret() << std::endl;
}