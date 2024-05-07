#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <iomanip> 

void replace_substr(std::string& str, std::string from, std::string to)
{
    size_t  pos;

    if (from.empty())
        return;
    while ((pos = str.find(from)) != std::string::npos)
    {
        str.erase(pos, from.length());
        str.insert(pos, to);
    }
}

void replace_file(std::string line, char* filename, char* s1, char* s2)
{
    std::string str1(s1);
    std::string str2(s2);
    std::string file = filename;

    file.append(".replace");
    std::ofstream file_dup(file.c_str(), std::ios::app);
    if (file_dup.is_open())
    {
        replace_substr(line, str1, str2);
        file_dup << line << std::endl;
        file_dup.close();
    }
    else
        std::cout << "Error opening or creating file" << std::endl;
}

int main(int argc, char *argv[])
{
    std::string line;
    std::ifstream myfile(argv[1]);

    if (argc != 4)
    {
        std::cout << std::setw(35) << "!Invalid number of arguments!" << std::endl;
        std::cout << "Correct usage: ./ex04 <filename> <s1> <s2>\n" << std::endl;
        return (EXIT_FAILURE);
    }
    if (myfile.is_open())
    {
        while (getline(myfile, line))
        {
            replace_file(line, argv[1],  argv[2],  argv[3]);
        }
        myfile.close();
    }
    else
        std::cout << "Error opening file" << std::endl;
    return EXIT_SUCCESS;
}