#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

# define RED	"\033[1;31m"
# define GREEN  "\033[1;32m"
# define CYAN	"\033[1;36m"
# define YELL	"\e[1;93m"
# define PINK	"\e[1;38;5;199m"
# define END	"\x1b[0m"

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string name);
        Animal(const Animal &copy);
        Animal& operator=(const Animal &assign);
        virtual ~Animal() = 0;

        // Getter
        std::string getType() const;

        void makeSound() const;
};

#endif