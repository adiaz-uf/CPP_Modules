# include "iter.hpp"

template <typename T>
void printElement(T element)
{
    std::cout << "Array element: " << element << std::endl;
}

int main()
{
    int array[] = {0, 10, 20, 30, 40};
    ::iter(array, 5, printElement<int>);
    std::cout << std::endl;


    char word[] = {'h', 'o', 'l', 'a'};
    ::iter(word, 4, printElement<char>);

    return 0;
}
