#include "Fixed.hpp"

const int Fixed::_fractional_bits = 8;

Fixed::Fixed() : _fixed_point_value(0) // Default contructor
{
    std::cout << "Default constructor called" <<  std::endl;
}

Fixed::Fixed(const Fixed &copy) // Copy default contructor
{
    *this = copy;
    std::cout << "Copy constructor called" <<  std::endl;
}

Fixed &Fixed::operator = (const Fixed &param) // Assigment operator constructor
{
    if (this != &param)
        this->_fixed_point_value = param.getRawBits();
    std::cout << "Copy assignment operator called" <<  std::endl;
    return *this;
}

Fixed::~Fixed() // Default destructor
{
    std::cout << "Destructor called" <<  std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" <<  std::endl;
    return _fixed_point_value;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" <<  std::endl;
    _fixed_point_value = raw;
}


