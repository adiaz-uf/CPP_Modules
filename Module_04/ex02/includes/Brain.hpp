#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

# define RED	"\033[1;31m"
# define GREEN  "\033[1;32m"
# define CYAN	"\033[1;36m"
# define YELL	"\e[1;93m"
# define PINK	"\e[1;38;5;199m"
# define END	"\x1b[0m"

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