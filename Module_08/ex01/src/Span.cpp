# include "Span.hpp"

Span::Span(): _N(0)
{
}

Span::Span(unsigned int n): _N(n)
{
}

Span::Span(const Span &copy): _span(copy._span), _N(copy._N)
{
}

Span &Span::operator=(const Span &assign)
{
    if (this != &assign)
    {
        this->_N = assign._N;
        this->_span = assign._span;
    }
    return *this;
}

Span::~Span()
{
}

void Span::addNumber(int number)
{
    if (this->_span.size() >= this->_N)
        throw (Span::SpanFullException()); 
    this->_span.push_back(number);
}

void Span::addManyNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    int dist = std::distance(begin, end);
    if (dist + this->_span.size() > this->_N)
        throw (Span::SpanTooSmallException());
    this->_span.insert(this->_span.begin(), begin, end);
}

int Span::shortestSpan()
{
    size_t  spanSize = this->_span.size();

    if (spanSize < 2)
        throw (Span::SpanTooSmallException());

    size_t  i = 0;
    int     shortestSpan;
    std::vector<int>    sortedVec = this->_span;

    std::sort(sortedVec.begin(), sortedVec.end());
    shortestSpan = sortedVec[i + 1] - sortedVec[i];
    for (i = 0; i < spanSize - 1; i++)
    {
        if (sortedVec[i + 1] - sortedVec[i] < shortestSpan)
            shortestSpan = sortedVec[i + 1] - sortedVec[i];
    }
    return shortestSpan;
}

int Span::longestSpan()
{

    if (this->_span.size() < 2)
        throw (Span::SpanTooSmallException());

    int min = *std::min_element(this->_span.begin(), this->_span.end());
    int max = *std::max_element(this->_span.begin(), this->_span.end());

    return max - min;
}

const char *Span::SpanFullException::what() const throw()
{
    return (RED "¡Array is full!" END);
}

const char *Span::SpanTooSmallException::what() const throw()
{
    return (RED "¡Array too small!" END);
}