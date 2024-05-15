#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int              _fixed_point_value;
        static const int _fractional_bits = 8;
    public:
        Fixed(void);                            // Default contructor
        Fixed(const int int_param);             // Int constructor
        Fixed(const float float_param);         // Float constructor
        Fixed(const Fixed &copy);               // Copy default contructor
        Fixed &operator = (const Fixed &param); // Assigment operator constructor
        ~Fixed();                               // Default destructor

        int     getRawBits(void) const;
        void    setRawBits(int const raw);

        float   toFloat(void) const;
        int     toInt(void) const;
};

std::ostream&   operator<<(std::ostream &out, Fixed const &param);

#endif