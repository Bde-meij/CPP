#include <iostream>

class Drop
{
	public:
	Drop();
	~Drop();

	void a(int);
	void a(char);
};

void Drop::a(int)
{
	std::cout << "hello this is int\n";
}
void Drop::a(char)
{
	std::cout << "hello this is char\n";
}

Drop::Drop()
{}
Drop::~Drop()
{}

int main()
{
	Drop drop;
	int i = 90;
	char c = 'l';
	drop.a(i);
	drop.a(c);
}
