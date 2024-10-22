#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <iostream>
# include <vector>

# define RED	"\033[1;31m"
# define GREEN  "\033[1;32m"
# define CYAN	"\033[1;36m"
# define YELL	"\e[1;93m"
# define PINK	"\e[1;38;5;199m"
# define END	"\033[0m"

class Span
{
private:
    std::vector<int>    _span;
    unsigned int        _N;
public:
    Span();
    Span(unsigned int n);
    Span(const Span &copy);
    Span &operator=(const Span &assign);
    ~Span();

    void    addNumber(int number);
    void    addManyNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
    int     shortestSpan();
    int     longestSpan();

    class SpanFullException : public std::exception
    {
        public:
            virtual const char *what() const throw();
    };
    class SpanTooSmallException : public std::exception
    {
        public:
            virtual const char *what() const throw();
    };
};



#endif // SPAN_HPP
