#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# define RED	"\033[1;31m"
# define GREEN  "\033[1;32m"
# define CYAN	"\033[1;36m"
# define YELL	"\e[1;93m"
# define PINK	"\e[1;38;5;199m"
# define END	"\033[0m"

# include <algorithm>
# include <iostream>

template <typename T>
bool easyfind(T, int value);

# include "easyfind.tpp"

#endif // EASYFIND_HPP