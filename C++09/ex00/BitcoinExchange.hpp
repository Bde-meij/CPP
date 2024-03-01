#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <algorithm>
#include <iostream>
#include <fstream>
#include <map>
// #include <string>
// #include <istream>

class BitcoinExchange
{
	public:
	BitcoinExchange();
	BitcoinExchange(std::string fileName);
	BitcoinExchange(const BitcoinExchange &BitcoinExchange);
	BitcoinExchange &operator=(const BitcoinExchange &BitcoinExchange);
	~BitcoinExchange();

	bool checkLine(std::string line);

	int extractDate(std::string line, char sep);
	float extractValue(std::string line, char sep);
	std::pair<int, float> makePair(std::string line, char sep);

	void printData();

	private:
	std::string _fileName;
};

#endif

// std::map<std::string> BitcoinExchange::strSplit(std::string str, char sep)
// {
// 	std::map<std::string> strVec;
// 	std::string s;
// 	size_t i = 0;
//     while (i < str.size()) 
// 	{
//         if (str[i] == sep)
// 		{
//             strVec.push_back(s);
//             s.clear();
// 		}
// 		else
//     		s += str[i];
//         i++;
// 	}
// 	if (!s.empty())
// 		strVec.push_back(s);
// 	return (strVec);
// }