#include "Fixed.hpp"

using std::cout;
using std::endl;

const int Fixed::_fractional_bits = 8;

Fixed::Fixed() : _fixed_point_value(0) // Default contructor
{
    cout << "Default constructor called" << endl;
}

Fixed::Fixed(const Fixed &copy) // Copy default contructor
{
    *this = copy;
    cout << "Copy constructor called" << endl;
}

Fixed &Fixed::operator = (const Fixed &param) // Assigment operator constructor
{
    if (this != &param)
        this->_fixed_point_value = param.getRawBits();
    cout << "Copy assignment operator called" << endl;
    return *this;
}

Fixed::~Fixed() // Default destructor
{
    cout << "Destructor called" << endl;
}

int Fixed::getRawBits(void) const
{
    cout << "getRawBits member function called" << endl;
    return _fixed_point_value;
}

void Fixed::setRawBits(int const raw)
{
    cout << "setRawBits member function called" << endl;
    _fixed_point_value = raw;
}


