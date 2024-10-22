# include "easyfind.hpp"
# include <vector>
# include <list>

int main(void)
{
    std::vector<int> vec;
    for (int i = 0; i < 5; ++i) 
    {
        vec.push_back(i);
        std::cout << "value in position " << i << ": " << vec[i] << std::endl;
    }
    if (::easyfind(vec, 5))
        std::cout << GREEN << "Number is in container" << END << std::endl;
    else
        std::cout << RED << "Number is NOT in container" << END << std::endl;

    std::list<char> lst;
    for (int i = 97; i < 102; ++i) 
    {
        lst.push_back(i);
        std::cout << "value in position " << i - 97 << ": " << lst.back() << std::endl;
    }
    if (::easyfind(lst, 100))
        std::cout << GREEN << "Number is in container" << END << std::endl;
    else
        std::cout << RED << "Number is NOT in container" << END << std::endl;
    return 0;
}
