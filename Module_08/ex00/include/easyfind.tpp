#ifndef EASYFIND_TPP
# define EASYFIND_TPP

template <typename T>
bool easyfind(T numbers, int value)
{
    if (find(numbers.begin(), numbers.end(), value) != numbers.end())
        return true;
    return false;
}

#endif // EASYFIND_TPP
