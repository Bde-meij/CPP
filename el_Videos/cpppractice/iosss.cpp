#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ifstream ifs("test.out");
	std::string dst;
	std::string dst2;
	ifs >> dst >> dst2;
	cout<<dst<<" "<<dst2<<endl;
	ifs.close();

	ofstream ofs("test2.out");
	ofs << "ponies" << endl;
	ofs.close();
}