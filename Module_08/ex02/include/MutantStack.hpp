#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <algorithm>
# include <iostream>
# include <stack>
# include <deque>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T>
{
    public:
        MutantStack();
        MutantStack(const MutantStack &copy);
        MutantStack &operator=(const MutantStack &assign);
        ~MutantStack();

        typedef typename Container::iterator iterator;
        iterator begin();
        iterator end();
};

# include "MutantStack.tpp"

#endif // MUTANTSTACK_HPP