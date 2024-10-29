#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <algorithm>
# include <stack>

# define MULTIPLICATION 42
# define PLUS 43
# define MINUS 45
# define DIVISION 47


class RPN
{
private:
    std::stack<int> _stack;
public:
    RPN();
    RPN(const RPN &copy);
    RPN &operator=(const RPN &assign);
    ~RPN();

    bool isOperator(int c);
    int calculateOperation(int c);
    int evaluateExpression(int c);
    void calculateRPN(const char *expression);
};

#endif // RPN_HPP
