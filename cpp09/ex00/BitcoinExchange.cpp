#include "BitcoinExchange.hpp"
#include <fstream>
#include <sstream>
#include <iomanip>
#include <cstdlib>

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const std::string& dbFile)
{
    loadDatabase(dbFile);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& copy)
{
	*this = copy;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& copy)
{
	if(this != &copy)
		*this = copy;
	return *this;
}

void BitcoinExchange::loadDatabase(const std::string& dbFile)
{
	std::ifstream file(dbFile.c_str());
	if (!file)
	{
		std::cerr << "Error: could not open file." << std::endl;
		return;
	}
	
	std::string line;
	std::getline(file, line);
	while (std::getline(file, line))
	{
		std::istringstream ss(line);
        std::string date, priceStr;
        if (std::getline(ss, date, ',') && std::getline(ss, priceStr))
		{
			double price = std::atof(priceStr.c_str());
            _rates[date] = price;
        }
	}
}

bool BitcoinExchange::isValidDate(const std::string& date)
{
    if (date.length() != 10 || date[4] != '-' || date[7] != '-')
		return 0;
	std::string sYear = date.substr(0, 5);
	std::string sMonth = date.substr(5, 2);
	std::string sDay = date.substr(8, 2);

	char **end = NULL;
	double year = std::strtod(sYear.c_str(), end);
	end = NULL;
	double month =std::strtod(sMonth.c_str(), end);
	end = NULL;
	double day =std::strtod(sDay.c_str(), end);

	if(month > 12 || month <= 0 || day > 31 || day <= 0)
		return 0;
	if(static_cast<int>(year) % 4 != 0 && month == 2 && day > 28)
		return 0;
	if(month != 8 && static_cast<int>(month) % 2 == 0 && day > 30)
		return 0;
	return 1;
}


bool BitcoinExchange::isValidValue(const std::string& valueStr)
{
    double val = std::atof(valueStr.c_str());
	if (val < 0)
	{
		std::cerr << "Error: not a positive number." << std::endl;
		return 0;
	}
	else if (val > 1000)
	{
		std::cerr << "Error: too large a number." << std::endl;
		return 0;
	}
	return 1;
}

double BitcoinExchange::getRateForDate(const std::string& date)
{
    std::map<std::string, double>::iterator it = _rates.lower_bound(date);
    if (it != _rates.end() && it->first == date)
        return it->second;
    if (it == _rates.begin())
        return 0;
    --it;
    return it->second;
}

void BitcoinExchange::processInputFile(const std::string& inputFile)
{
    std::ifstream file(inputFile.c_str());
    if (!file)
	{
        std::cerr << "Error: could not open file." << std::endl;
        return;
    }

    std::string line;
    std::getline(file, line);
    while (std::getline(file, line))
	{
        std::istringstream ss(line);
        std::string date, valueStr;

        if (std::getline(ss, date, '|') && std::getline(ss, valueStr))
		{
            date = date.substr(0, date.find_last_not_of(" \t") + 1);
            valueStr = valueStr.substr(valueStr.find_first_not_of(" \t"));

            if (!isValidDate(date))
			{
                std::cerr << "Error: bad input => " << date << std::endl;
                continue;
            }

            if (!isValidValue(valueStr))
                continue;

			double value = std::atof(valueStr.c_str());
			double rate = getRateForDate(date);
			double result = value * rate;
			std::cout << date << " => " << value << " = " << result << std::endl;
        }
		else
			std::cerr << "Error: bad input => " << line << std::endl;
    }
}