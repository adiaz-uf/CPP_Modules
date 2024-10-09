#include "ShrubberyCreationForm.h"

ShrubberyCreationForm::ShrubberyCreationForm():
AForm("No name", 145, 137), _target("Default target")
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target):
AForm("ShrubberyCreationForm", 145, 137), _target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy):
AForm(copy), _target(copy._target)
{
    
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &assign)
{
    (void)assign;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

std::string ShrubberyCreationForm::getTarget() const
{
    return this->_target;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (this->isExecutable(executor, *this) == false)
        return ;
    std::ofstream newFile((this->getTarget() + "_shrubbery").c_str());
    
    for (int i = 0; i < 12; ++i)
    {
        for (int x = 0; x < 12; ++x)
        {
            newFile << " ";
        }
            for (int j = 12 - i; j > 0; j--){
            newFile << " ";
        }
            for (int k = 0; k < 2 * i + 1; ++k){
            newFile << "*";
        }
        newFile << '\n';
    }
    for (int t = 0; t < 3; t++)
    {
        for (int o = 0; o < 22; o++)
        {
            newFile <<  " ";
        }
        newFile <<  "|  |\n";
    }
}
