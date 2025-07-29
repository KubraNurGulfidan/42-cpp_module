#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <map>


class BitcoinExchange
{
private:
	void loadDatabase(const std::string& dbFile);
	double getRateForDate(const std::string& date);
	bool isValidValue(const std::string& valueStr);
	bool isValidDate(const std::string& date);
	
	std::map<std::string, double> _rates;
	
public:
	BitcoinExchange();
	~BitcoinExchange();
	BitcoinExchange(const std::string& dbFile);
    BitcoinExchange(const BitcoinExchange& copy);
    BitcoinExchange& operator=(const BitcoinExchange& copy);

	void processInputFile(const std::string& inputFile);
};


#endif