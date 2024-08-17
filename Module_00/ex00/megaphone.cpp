#include <iostream>

int main(int argc, char *argv[])
{
    std::string text;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int i = 1; argv[i]; i++)
        {
            text = argv[i];
            for (int j = 0; text[j]; j++)
                std::cout << (char) toupper(text[j]);
        }
        std::cout << std::endl;
    }
    return 0;
}