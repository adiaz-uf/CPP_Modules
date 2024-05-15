#ifndef Brain_HPP
# define Brain_HPP

# include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain &copy);
        Brain& operator=(const Brain &assign);
        ~Brain();
};

#endif