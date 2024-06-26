#include <iostream>

int main(void)
{
    std::string str("HI THIS IS BRAIN");

    std::string *stringPTR = &str; // stringPTR points to str
    std::string &stringREF = str; // Create a reference to the variable

    std::cout << "Memory address of str: " << &str << std::endl;
    std::cout << "Memory address of stringPTR: " << stringPTR << std::endl;
    std::cout << "Memory address of stringREF: " << &stringREF << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
    std::cout << "Value of the string variable: " << str << std::endl;
    std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "The value pointed to by  stringREF: " << stringREF << std::endl;

    return 0;
}