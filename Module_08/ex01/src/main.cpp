# include "Span.hpp"
# include <cmath>

int main(void)
{
    Span s1(15000);
    std::vector<int>  bigVec; // Used to test addManNumbers()

    srand(time(NULL));
    for (size_t i = 0; i < 15000; i++)
    {
        int num = rand();
        s1.addNumber(num);
        bigVec.push_back(num);
    }
    try
    {
        std::cout << "Shortest Span: " << s1.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << s1.longestSpan() << std::endl << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "Subject Test" << std::endl;
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl << std::endl;

    Span manynumber = Span(15000);
    try
    {
        manynumber.addManyNumbers(bigVec.begin(), bigVec.end());
        std::cout << "Shortest Span: " << s1.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << s1.longestSpan() << std::endl << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
    
    
    return 0;
}
