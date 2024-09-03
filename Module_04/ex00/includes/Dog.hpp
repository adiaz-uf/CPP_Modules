#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog &copy);
        Dog& operator=(const Dog &assign);
        ~Dog();

        std::string getType() const; 
        void makeSound() const;
};

#endif