# include "PmergeMe.hpp"

int main(int argc, char const *argv[])
{
    try
    {
        PmergeMe mergeInsertSort = PmergeMe(argc, argv);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}
