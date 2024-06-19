# include "Brain.hpp"
# include <cstring>

using std::cout;
using std::endl;

Brain::Brain()
{
    cout << YELL "Brain Constructor" END << endl;
}

Brain::Brain(const Brain &copy)
{
    cout << YELL "Brain Copy Constructor" END << endl;

    *this = copy;
}

Brain &Brain::operator=(const Brain &assign)
{
    cout << YELL "Brain Assignment Constructor" END << endl;
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
    cout << YELL "Brain Destructor" END << endl;
}
