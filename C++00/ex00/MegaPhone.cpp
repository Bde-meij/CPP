#include <iostream>
#include <unistd.h>

class MegaPhone
{
	public:
	char *amplify_sound(char *allcaps);
	MegaPhone(char **);
	~MegaPhone();
};

char *MegaPhone::amplify_sound(char *allcaps)
{
	int i = 0;
	while (allcaps[i])
	{
		if ((allcaps[i] >= 'a') && (allcaps[i] <= 'z'))
			allcaps[i] -= 32;
		i++;
	}
	return (allcaps);
}

MegaPhone::MegaPhone(char **av)
{
	int i = 1;
	while (av[i])
	{
		std::cout 
			<< this->amplify_sound(av[i]);
		i++;
	}
	std::cout << std::endl;
}

MegaPhone::~MegaPhone(){}

int main(int ac, char **av)
{
	if (ac < 2)
		return (std::cout 
			<< "* LOUD AND UNREADABLE FEEDBACK NOISE *" \
			<< std::endl, 0);
	MegaPhone louder(av);
}