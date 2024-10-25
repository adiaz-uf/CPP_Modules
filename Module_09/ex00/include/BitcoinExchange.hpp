#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <sstream>
# include <map>
# include <string>
# include <cstdlib>

# define NUM_MONTH 12
# define NUM_DAYS 31
# define MIN_YEAR 2009

class BitcoinExchange
{
private:
    std::map<std::string, float> _database;
public:
    BitcoinExchange();
    BitcoinExchange(const BitcoinExchange &copy);
    BitcoinExchange &operator=(const BitcoinExchange &assign);
    ~BitcoinExchange();

    void        readFileIntoMap(const std::string fileName);
    void        exchange(const std::string fileName);
    void        computeExchange(std::string field, std::string fileLine);
    bool        isValidDate(const std::string date);
    bool        isValidValue(const std::string value);
    bool        isNumber(const std::string value);
    void        replace_substr(std::string& str, size_t pos, size_t length, std::string to);
    std::string floatToString(float value);
    std::string findClosestDate(const std::string date);
    std::string getPreviousDate(const std::string date);
};

#endif // BITCOINEXCHANGE_HPP
