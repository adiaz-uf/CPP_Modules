# include "BitcoinExchange.hpp"

int main(int argc, char const *argv[])
{
    if (argc != 2)
    {
        if (argc < 2)
            std::cout << "Error: could not open file" << std::endl;
        else
            std::cout << "Error: Incorrect number of arguments" << std::endl;
        return 1;
    }
    std::string fileName = "data.csv";
    BitcoinExchange btc = BitcoinExchange();
    btc.readFileIntoMap(fileName);
    btc.exchange(argv[1]);

 /*    std::map<std::string, float> database_copy = btc.getDatabase();
    for (std::map<std::string, float>::iterator it = database_copy.begin(); it != database_copy.end(); it++)
    {
        std::cout << "date: " << it->first << std::endl;
        std::cout << "value: " << it->second << std::endl;
    } */
    
    return 0;
}
