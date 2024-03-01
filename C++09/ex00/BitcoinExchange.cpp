#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	std::cout << __FUNCTION__ << " constructor called" << std::endl;
	std::cout << "fileName argument was not provided, aborting..." << std::endl;
}

BitcoinExchange::BitcoinExchange(std::string fileName) : _fileName(fileName)
{
	// std::cout << __FUNCTION__ << " called" << std::endl;
	printData();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) : _fileName(nullptr)
{
	// std::cout << __FUNCTION__ << " called" << std::endl;
	*this = other;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
	// std::cout << __FUNCTION__ << " called" << std::endl;
	if (this == &other)
		return (*this);
	this->_fileName = other._fileName;
	return (*this);
}

BitcoinExchange::~BitcoinExchange()
{
	std::cout << __FUNCTION__ << " destructor called" << std::endl;
}

bool BitcoinExchange::checkLine(std::string line)
{
	if (line.size() < 13)
		return (1);
	if (!isdigit(line[0]))
		return (1);
	if (!isdigit(line[1]))
		return (1);
	if (!isdigit(line[2]))
		return (1);
	if (!isdigit(line[3]))
		return (1);
	if (line[4] != '-')
		return (1);
	if (!isdigit(line[5]))
		return (1);
	if (!isdigit(line[6]))
		return (1);
	if (line[7] != '-')
		return (1);
	if (!isdigit(line[8]))
		return (1);
	if (!isdigit(line[9]))
		return (1);
	if (line[10] != ' ')
		return (1);
	if (line[11] != '|')
		return (1);
	if (line[12] != ' ')
		return (1);

	size_t i = 13;
	int dots = 0;
	while (i < line.size())
	{
		if (!isdigit(line[i]))
		{
			if (line[i] == '.')
				dots++;
			else
				return (1);
		}
		if (dots > 1)
			return (1);
		i++;
	}
	float value = stof(std::string(&line[13]));
	if ((value > 999) || (value < 0))
		return (1);
	return (0);
}

int BitcoinExchange::extractDate(std::string line, char sep)
{
	size_t i = 0;
	std::string date;

	while ((i < line.size()) && (line[i] != sep))
	{
		if ((line[i] >= '0') && (line[i] <= '9'))
			date += line[i];
		else if (line[i] != '-')
			std::cout << "error on " << __FUNCTION__ << std::endl;
		i++;
	}
	return (stoi(date));
}

float BitcoinExchange::extractValue(std::string line, char sep)
{
	size_t i = 0;
	std::string value;
	while ((i < line.size()) && (line[i] != sep))
		i++;
	i++;
	while (i < line.size())
	{
		if (((line[i] >= '0') && (line[i] <= '9')) || (line[i] <= '.'))
			value += line[i];
		else
			std::cout << "error on " << __FUNCTION__ << std::endl;
		i++;
	}
	return (stof(value));
}

std::pair<int, float> BitcoinExchange::makePair(std::string line, char sep)
{
	std::pair<int, float> data;
	data.first = extractDate(line, sep);
	data.second = extractValue(line, sep);
	return (data);
}

void BitcoinExchange::printData()
{
	std::map<int, float> dataMap;
	std::fstream dataStream;
	dataStream.open("data.csv", std::fstream::in);
	std::string line;
	
	dataStream >> line;
	while (1)
	{
		dataStream >> line;
		if (dataStream.eof() != 0)
			break ;
		dataMap.insert(makePair(line, ','));
	}

	std::pair<int, float> inputPair;
	dataStream.close();
	dataStream.open(_fileName, std::fstream::in);
	while (getline(dataStream, line))
	{
		if (!checkLine(line))
		{
			line.erase(10, 1);
			line.erase(11, 1);
			inputPair = makePair(line, '|');
			auto it = dataMap.lower_bound(inputPair.first);
			if ((it->first != inputPair.first) && (it->first > dataMap.begin()->first))
				*it--;
			std::cout << "input date: " << inputPair.first << " closest csv date: " << it->first << std::endl;
			std::cout << "input value: " << inputPair.second << " exponent value: " << it->second << std::endl;
			std::cout << "result: " << inputPair.second * it->second << "\n" << std::endl;
		}
	}
}
