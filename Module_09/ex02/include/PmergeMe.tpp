#ifndef PMERGEME_TPP
# define PMERGEME_TPP

template <typename T>
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
}

template <typename T>
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
}

#endif // PMERGEME_TPP
