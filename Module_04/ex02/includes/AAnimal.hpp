#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

# define RED	"\033[1;31m"
# define GREEN  "\033[1;32m"
# define CYAN	"\033[1;36m"
# define YELL	"\e[1;93m"
# define PINK	"\e[1;38;5;199m"
# define END	"\x1b[0m"

class AAnimal
{
    protected:
        std::string type;
    public:
        AAnimal();
        AAnimal(std::string name);
        AAnimal(const AAnimal &copy);
        AAnimal& operator=(const AAnimal &assign);
        virtual ~AAnimal();

        // Getter
        std::string getType() const;

        virtual void makeSound() const = 0;
};

#endif