#include <iostream>
#include <fstream>

int main()
{
	std::ifstream ifs("inputfile");
	std::string dst;
	std::string dst2;
	ifs >> dst >> dst2; // first and second from inputfile
	std::cout << ifs << " " << dst2 << std::endl;
	ifs.close();

	std::ofstream ofs("outputfile");
	ofs << "ponyta is best" << std::endl; // insert in file
	ofs.close();
}