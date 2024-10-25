# include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy): _database(copy._database)
{
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &assign)
{
    if (this != &assign)
        this->_database = assign._database;
    return *this;
}

BitcoinExchange::~BitcoinExchange()
{
}

void BitcoinExchange::replace_substr(std::string& str, size_t pos, size_t length, std::string to)
{
    str.erase(pos, length);
    str.insert(pos, to);
}

void BitcoinExchange::readFileIntoMap(const std::string fileName)
{
    int         column = 0;
    char        delimiter = ',';
    std::string fileLine;
    std::string field;
    std::string date;

    std::ifstream file(fileName.c_str());
    while (getline(file, fileLine)) // read every line in file
    {
        std::stringstream line(fileLine);
        while (getline(line, field, delimiter)) // get every field of every line
        {
            if (column == 0) // 'date' field
            {
                date = field;
                column = 1;
            }
            else // 'value' field
            {
                this->_database[date] = atof(field.c_str()); // insert fields in map
                column = 0;
            }
        }
    }
    file.close();
}

bool BitcoinExchange::isValidDate(const std::string date) // year-month-day
{
    std::string dateArray[3];
    std::string dateCopy = date;
    std::string delimiter;
    size_t      delimiterPos;
    int         i = 0;
    float       minValues[3] = { 2009, 1, 1 };
    float       maxValues[3] = { 9999, 12, 31 };

    delimiter = "-";
    delimiterPos = dateCopy.find(delimiter);
    while (delimiterPos != std::string::npos && i <= 2)
    {
        dateArray[i] = dateCopy.substr(0, delimiterPos);
        dateCopy.erase(0, delimiterPos + delimiter.length());
        delimiterPos = dateCopy.find(delimiter);
        i++;
    }
    if (i > 2)
        return false;
    dateArray[i] = dateCopy;
    for (size_t j = 0; j < 3; j++)
    {
        if (!isNumber(dateArray[j]))
            return false;
        float value = atof(dateArray[j].c_str());
        if (value < minValues[j] || value > maxValues[j])
            return false;
    }
    return true;
}

bool BitcoinExchange::isValidValue(std::string num)
{
    if (!isNumber(num))
    {
        std::cout << "Error: not a number" << std::endl;
        return false;
    }
    float value = atof(num.c_str());
    if (value < 0)
    {
        std::cout << "Error: not a positive number" << std::endl;
        return false;
    }
    else if (value > 1000)
    {
        std::cout << "Error: too large a number" << std::endl;
        return false;
    }
    return true;
}

bool BitcoinExchange::isNumber(const std::string value)
{
    size_t      i = 0;
    size_t      j = 0;
    int         nDot = 0;
    int         nNeg = 0;
    int         nFloat = 0;

    while (value[j] == ' ')
        j++;
    if (value[i + j] == '-')
    {
        nNeg++;
        i++;
    }
    while (value[i + j])
    {
        if (value[i + j] == '-' || value[i + j] == '+')
            break;
        if (value[i + j] == '.' && ((i != 0 && nNeg == 0) || (i > 1 && nNeg == 1)) && i != value.size() - 1)
            nDot++;
        else if (value[i + j] == 'f' && i == value.size() - 1)
            nFloat++;
        else if (!isdigit(value[i + j]))
            break;
        i++;
    }
    if (value[i + j] == ' ')
        i++;
    if (i + j == value.size() && nDot == 0 && nFloat == 0) // is Int
        return true;
    else if (i + j == value.size() && nDot == 1 && nFloat == 1) // is Float
        return true;
    else if (i + j == value.size() && nDot == 1 && nFloat == 0) // is Double
        return true;
    return false;
}

std::string BitcoinExchange::findClosestDate(const std::string date)
{
    std::string dateToSearch = date;
    if (date[date.size() - 1] == ' ')
        dateToSearch = date.substr(0, date.length() - 1);
    if (this->_database.find(dateToSearch) != this->_database.end())
    {
        return (dateToSearch);
    }
    std::string fecha = getPreviousDate(dateToSearch);
    return (findClosestDate(fecha));
}

std::string BitcoinExchange::floatToString(float value)
{
    std::ostringstream s;
    if (value < 10)
        s << 0;
    s << value;
    return (s.str());
}

std::string BitcoinExchange::getPreviousDate(const std::string date)
{
    float   value;
    std::string sep = "-";
    std::string dateCopy = date;

    if (date[date.size() - 2] == ' ')
        std::string dateCopy = date.substr(0, date.length() - 1);
    std::string previousDate = dateCopy;
    std::string day = previousDate.substr(8, 2);
    value = atof(day.c_str());
    if (value > 1)
    {
        value--;
        std::string newDay = floatToString(value);
        replace_substr(previousDate, 8, 2, newDay);
        return (previousDate);
    }
    replace_substr(previousDate, 8, 2, "31");
    std::string month = previousDate.substr(5, 2);
    value = atof(month.c_str());
    if (value > 1)
    {
        value--;
        std::string newMonth = floatToString(value);
        replace_substr(previousDate, 5, 2, newMonth);
        return (previousDate);
    }
    replace_substr(previousDate, 5, 2, "12");
    std::string year = previousDate.substr(0, 4);
    value = atof(year.c_str()) - 1;
    std::string newYear = floatToString(value);
    replace_substr(previousDate, 0, 4, newYear);
    return (previousDate);
}

void BitcoinExchange::computeExchange(std::string field, std::string fileLine)
{
    int         column = 0;
    char        delimiter = '|'; 
    std::string date;
    std::string searchDate;

    std::stringstream line(fileLine);
    while (getline(line, field, delimiter)) // get every field of every line
    {
        if (column == 0) // 'date' field
        {
            date = field;
            searchDate = "none";
            if (isValidDate(date))
                searchDate = findClosestDate(date);
            else
                std::cout << "Error: bad input => " << date << std::endl;
            column = 1;
        }
        else // 'value' field
        {
            if (searchDate != "none" && isValidValue(field))
            {
                float cuantity = atof(field.c_str());
                float totalValue = this->_database.find(searchDate)->second * cuantity;
                std::cout << date << "=> " << cuantity << " = " << totalValue << std::endl;
            }
            column = 0;
        }
    }
}

void BitcoinExchange::exchange(const std::string fileName)
{
    std::string fileLine;
    std::string field;

    std::ifstream file(fileName.c_str());
    while (getline(file, fileLine)) // read every line in file
    {
        std::stringstream line(fileLine);
        if (fileLine.find("|") == std::string::npos)
            std::cout << "Error: bad input => " << fileLine << std::endl;
        else if (fileLine == "date | value")
            ;
        else
            computeExchange(field, fileLine);
    }
    file.close();
}
