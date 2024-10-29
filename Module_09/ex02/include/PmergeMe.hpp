#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <deque>
//# include <cstring>
# include <iomanip>
# include <ctime>

class PmergeMe
{
private:
    std::vector<int> _vector;
    std::deque<int> _deque;

    template <typename T> void parseArgsToContainer(int argc, const char **argv, T& container);
    template <typename T> void sort(T& sequence);
    void printContainer(void);

public:
    PmergeMe();
    PmergeMe(int argc, const char **argv);
    PmergeMe(const PmergeMe &copy);
    PmergeMe& operator=(const PmergeMe &assign);
    ~PmergeMe();

    class InvalidArgumentsException : public std::exception
    {
        public:
            virtual const char* what() const throw(); 
    };
};

# include "PmergeMe.tpp"

#endif // PMERGEME_HPP