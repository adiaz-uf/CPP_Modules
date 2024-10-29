# include "RPN.hpp"

int main(int argc, char const *argv[])
{
    if (argc != 2)
    {
        std::cout << "Error: Invalid number of arguments, correct usage: ./RPN \"expression\"" << std::endl;
        return 1;
    }
    RPN newOperation = RPN();
    newOperation.calculateRPN(argv[1]);
    return 0;
}
