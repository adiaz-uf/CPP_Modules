# include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(int argc, const char **argv)
{
    if (argc < 3)
        throw InvalidArgumentsException();

    this->parseArgsToContainer(argc, argv, this->_vector);
    this->parseArgsToContainer(argc, argv, this->_deque);

    std::cout << "Before: ";
    this->printContainer();

    //vector
    clock_t start = clock();
    this->sort(this->_vector);
    clock_t vectorTime = clock();
    
    //deque
    clock_t startDeq = clock();
    this->sort(this->_deque);
    clock_t dequeTime = clock();

    std::cout << "After:  ";
    this->printContainer();

    double time = static_cast<double>(vectorTime - start) / CLOCKS_PER_SEC * 1000.0;
    std::cout << "Time to process a range of " << this->_vector.size() \
    << " with std::vector : " << std::fixed << std::setprecision(5) << time << " us"<<  std::endl;

    time = static_cast<double>(dequeTime - startDeq) / CLOCKS_PER_SEC * 1000.0;
    std::cout << "Time to process a range of " << this->_deque.size() \
    << " with std::deque : " << std::fixed << std::setprecision(5) << time << " us"<<  std::endl;

}

PmergeMe::PmergeMe(const PmergeMe &copy)
{
    *this = copy;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &assign)
{
    if (this != &assign)
    {
        this->_deque = assign._deque;
        this->_vector = assign._vector;
    }
    return *this;
}

PmergeMe::~PmergeMe()
{
}

/* template <typename T>
void PmergeMe::parseArgsToContainer(int argc, const char **argv, T& container)
{
    for (int i = 1; i < argc; i++)
    {
        std::string element = argv[i];
        int num = atoi(element.c_str());
        if (num <= 0)
            throw (InvalidArgumentsException());
        container.push_back(num);
    }
} */

void PmergeMe::printContainer(void)
{
    std::vector<int>::iterator start = this->_vector.begin();
    std::vector<int>::iterator end = this->_vector.end();
    while (start != end)
    {
        std::cout << " " << *start;
        start++;
    }
    std::cout << std::endl;
}

/* template <typename T>
void PmergeMe::sort(T &sequence)
{
    if (sequence.size() < 2)
        return ;
    typename T::iterator middle = sequence.begin();
    std::advance(middle, sequence.size() / 2);
    T firstHalf(sequence.begin(), middle);
    T secondHalf(middle, sequence.end());

    sort(firstHalf);
    sort(secondHalf);

    sequence.clear();

    typename T::iterator firstStart = firstHalf.begin();
    typename T::iterator secondStart = secondHalf.begin();
    while (firstStart != firstHalf.end() && secondStart != secondHalf.end())
    {
        if (*firstStart < *secondStart)
        {
            sequence.push_back(*firstStart);
            firstStart++;
        }
        else
        {
            sequence.push_back(*secondStart);
            secondStart++;
        }
    }
    while (firstStart != firstHalf.end())
    {
        sequence.push_back(*firstStart);
        firstStart++;
    }
    while (secondStart != secondHalf.end())
    {
        sequence.push_back(*secondStart);
        secondStart++;
    }
} */

const char *PmergeMe::InvalidArgumentsException::what() const throw()
{
    return ("Error: Invalid arguments");
}
