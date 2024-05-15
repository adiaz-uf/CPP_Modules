#include "Fixed.hpp"

using std::cout;
using std::endl;

Fixed::Fixed(void) : _fixed_point_value(0) // Default contructor
{
    cout << "Default constructor called" << endl;
}

Fixed::Fixed(const int int_param) : _fixed_point_value(int_param * (1 << Fixed::_fractional_bits))
{
    cout << "Int constructor called" << endl;
}

Fixed::Fixed(const float float_param) : _fixed_point_value(roundf(float_param * (1 << _fractional_bits)))
{
    cout << "Float constructor called" << endl;
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
    return _fixed_point_value;
}

void Fixed::setRawBits(int const raw)
{
    _fixed_point_value = raw;
}

float   Fixed::toFloat(void) const
{
    return ((float)_fixed_point_value / (float)(1 << _fractional_bits));
}

int     Fixed::toInt(void) const
{
    return ((int)_fixed_point_value / (int)(1 << _fractional_bits));
}

std::ostream&   operator<<(std::ostream &out, Fixed const &param)
{
    out << param.toFloat();
    return (out);
}
