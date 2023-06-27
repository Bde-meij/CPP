#include <iostream>
#include <string>
using namespace std;

// int main()
// {
// 	int balls = 1;
// 	int *Pballs = &balls;
// 	int &Aballs = balls;

// 	cout << balls<<" "<<*Pballs<<" "<<Aballs<<endl;
// 	*Pballs = 2;
// 	cout<<balls<<endl;
// 	Aballs = 3;
// 	cout<<balls<<endl;
// }

void pontar(string *str)
{
	*str += "ponies";
}

void conpontar(string const *str)
{
	cout << *str << endl;
}

void refferee(string &str)
{
	str += "ponies";
}

void conrefferee(string const &str)
{
	cout << str << endl;
}

int main()
{
	string str = "vlinder";
	cout << str << endl;
	pontar(&str);
	conpontar(&str);
	str = "otters";
	cout << str << endl;
	refferee(str);
	conrefferee(str);
}

// const zegt iets over het vorige (behalve als het de eerste 'const' is,
// deze kan aan beide kanten staan) 
// https://stackoverflow.com/questions/1143262/what-is-the-difference-between-const-int-const-int-const-and-int-const