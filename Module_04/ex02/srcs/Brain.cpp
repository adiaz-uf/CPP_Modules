# include "Brain.hpp"
# include <cstring>

Brain::Brain()
{
    std::cout << YELL "Brain Constructor" END <<  std::endl;
}

Brain::Brain(const Brain &copy)
{
    std::cout << YELL "Brain Copy Constructor" END <<  std::endl;

    *this = copy;
}

Brain &Brain::operator=(const Brain &assign)
{
    std::cout << YELL "Brain Assignment Constructor" END <<  std::endl;
    int i = 0;
    while (i < 100)
    {
        this->ideas[i] = assign.ideas[i];
        i++;
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << YELL "Brain Destructor" END <<  std::endl;
}
