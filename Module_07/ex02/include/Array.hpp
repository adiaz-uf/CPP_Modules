#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
    private:
        T *_array;
        unsigned int _size;
    public:
        Array();
        Array(unsigned int size);
        Array(const Array &copy);
        Array &operator=(const Array &assign);
        ~Array();

        T &operator[](unsigned int idx);
        T &operator[](unsigned int idx)const;
        unsigned int size() const;

        class IndexOutOfRange : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("¡Index out of range!");
                }
        };
};

# include "Array.tpp"

#endif