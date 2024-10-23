#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack()
{
    std::cout << "Constructor for MutantStack" << std::endl;
}

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(const MutantStack &copy)
{
    std::cout << "Copy Constructor for MutantStack" << std::endl;
    *this = copy;
}

template <typename T, typename Container>
MutantStack<T, Container> &MutantStack<T, Container>::operator=(const MutantStack &assign)
{
    std::cout << "Assign Constructor for MutantStack" << std::endl;
    (void)assign;
    return *this;
}

template <typename T, typename Container>
MutantStack<T, Container>::~MutantStack()
{
    std::cout << "Destructor for MutantStack" << std::endl;
}

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::begin()
{
    return this->c.begin();
}
template <typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::end()
{
    return this->c.end();
}

#endif // MUTANTSTACK_TPP
