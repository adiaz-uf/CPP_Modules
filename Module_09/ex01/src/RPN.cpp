# include "RPN.hpp"

RPN::RPN()
{
}

RPN::RPN(const RPN &copy): _stack(copy._stack)
{
}

RPN &RPN::operator=(const RPN &assign)
{
    if (this != &assign)
        this->_stack = assign._stack;
    return *this;
}

RPN::~RPN()
{
}

bool RPN::isOperator(int c)
{
    if (c == PLUS || c == MINUS || c == MULTIPLICATION || c == DIVISION)
        return true;
    return false;
}

int RPN::calculateOperation(int c)
{
    int a;
    int b;
    int result;

    a = this->_stack.top();
    this->_stack.pop();
    b = this->_stack.top();
    this->_stack.pop();
    switch (c)
    {
        case MULTIPLICATION:
            result = b * a;
            break;
        case PLUS:
            result = b + a;
            break;
        case MINUS:
            result = b - a;
            break;
        case DIVISION:
            result = b / a;
            break;
        default:
            return EXIT_FAILURE;
            break;
    }
    this->_stack.push(result);
    return EXIT_SUCCESS;
}

int RPN::evaluateExpression(int c)
{
    if (isdigit(c))
    {
        this->_stack.push(c - '0');
        return (EXIT_SUCCESS);
    }
    else if (isOperator(c))
    {
        if (this->_stack.size() < 2 || calculateOperation(c) == EXIT_FAILURE)
            return EXIT_FAILURE;
        return EXIT_SUCCESS;
    }
    else if (c == ' ')
        return (EXIT_SUCCESS);
    return EXIT_FAILURE;
}

void RPN::calculateRPN(const char *expression)
{
    int i = 0;

    while (expression[i])
    {
        if (evaluateExpression(expression[i]) == EXIT_FAILURE)
        {
            std::cout << "Error: invalid expression" << std::endl;
            return ;
        }
        i++;
    }
    if (this->_stack.size() != 1)
    {
        std::cout << "Error: Too much elements" << std::endl;
        return ;
    }
    std::cout << this->_stack.top() << std::endl;
}
