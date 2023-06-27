#include <iostream>
using namespace std;

int main()
{
	int numBalls = 345;

	int *balP = &numBalls;
	int &balR = numBalls;

	balR = 9;

	cout << numBalls 
	<< endl
	<< *balP 
	<< endl
	<< balR 
	<< endl;
}