#include "Form.h"

Form::Form(): _name("No name"), _isSigned(false), _signGrade(150), _execGrade(150)
{
}

Form::Form(const std::string name, const int signGrade, const int execGrade):
_name(name), _isSigned(false)
{

}

Form::~Form()
{
}