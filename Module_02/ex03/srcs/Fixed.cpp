#include "Fixed.hpp"

Fixed::Fixed(void) : _fixed_point_value(0) // Default contructor
{
}

Fixed::Fixed(const int int_param) : _fixed_point_value(int_param * (1 << Fixed::_fractional_bits))
{
}

Fixed::Fixed(const float float_param) : _fixed_point_value(roundf(float_param * (1 << _fractional_bits)))
{
}

Fixed::Fixed(const Fixed &copy) // Copy default contructor
{
    *this = copy;
}

Fixed &Fixed::operator = (const Fixed &param) // Assigment operator constructor
{
    if (this != &param)
        this->_fixed_point_value = param.getRawBits();
    return *this;
}

Fixed::~Fixed() // Default destructor
{
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

bool    Fixed::operator>(const Fixed &param)
{
    return this->_fixed_point_value > param.getRawBits();
}

bool    Fixed::operator<(const Fixed &param)
{
    return this->_fixed_point_value < param.getRawBits();
}

bool    Fixed::operator>=(const Fixed &param)
{
    return this->_fixed_point_value >= param.getRawBits();
}

bool    Fixed::operator<=(const Fixed &param)
{
    return this->_fixed_point_value <= param.getRawBits();
}

bool    Fixed::operator==(const Fixed &param)
{
    return this->_fixed_point_value == param.getRawBits();
}

bool    Fixed::operator!=(const Fixed &param)
{
    return this->_fixed_point_value != param.getRawBits();
}

Fixed   Fixed::operator+(const Fixed &param)
{
    return Fixed(this->toFloat() + param.toFloat());
}

Fixed   Fixed::operator-(const Fixed &param)
{
    return Fixed(this->toFloat() - param.toFloat());
}

Fixed   Fixed::operator*(const Fixed &param)
{
    return Fixed(this->toFloat() * param.toFloat());
}

Fixed   Fixed::operator/(const Fixed &param)
{
    return Fixed(this->toFloat() / param.toFloat());
}

// Pre-increment
Fixed &Fixed::operator++(void) 
{
    this->_fixed_point_value++;
    return *this;
}

Fixed &Fixed::operator--(void)
{
    this->_fixed_point_value--;
    return *this;
}

// Post-increment
Fixed   Fixed::operator++(int)
{
    Fixed tmp(this->_fixed_point_value * toFloat());
    this->_fixed_point_value++;
    return tmp;
}

Fixed   Fixed::operator--(int)
{
    Fixed tmp(this->_fixed_point_value * toFloat());
    this->_fixed_point_value--;
    return tmp;
}

Fixed &Fixed::min(Fixed &n1, Fixed &n2)
{
    if (n1.toFloat() <= n2.toFloat())
        return n1;
    return n2;
}

const Fixed &Fixed::min(const Fixed &n1, const Fixed &n2)
{
    if (n1.toFloat() <= n2.toFloat())
        return n1;
    return n2;
}

Fixed &Fixed::max(Fixed &n1, Fixed &n2)
{
    if (n1.toFloat() >= n2.toFloat())
        return n1;
    return n2;
}

const Fixed &Fixed::max(const Fixed &n1, const Fixed &n2)
{
    if (n1.toFloat() >= n2.toFloat())
        return n1;
    return n2;
}

std::ostream&   operator<<(std::ostream &out, const Fixed &param)
{
    out << param.toFloat();
    return (out);
}