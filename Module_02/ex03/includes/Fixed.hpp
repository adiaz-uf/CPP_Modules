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
        Fixed &operator= (const Fixed &param); // Assigment operator constructor
        ~Fixed();                               // Default destructor

        int     getRawBits(void) const;
        void    setRawBits(int const raw);

        float   toFloat(void) const;
        int     toInt(void) const;

        bool    operator>(const Fixed &param);
        bool    operator<(const Fixed &param);
        bool    operator>=(const Fixed &param);
        bool    operator<=(const Fixed &param);
        bool    operator==(const Fixed &param);
        bool    operator!=(const Fixed &param);

        Fixed   operator+(const Fixed &param);
        Fixed   operator-(const Fixed &param);
        Fixed   operator*(const Fixed &param);
        Fixed   operator/(const Fixed &param);

        Fixed   &operator++(void);
        Fixed   &operator--(void);
        Fixed   operator++(int);
        Fixed   operator--(int);

        static Fixed &min(Fixed &n1, Fixed &n2);
        static const Fixed &min(const Fixed &n1, const Fixed &n2);
        static Fixed &max(Fixed &n1, Fixed &n2);
        static const Fixed &max(const Fixed &n1, const Fixed &n2);
};

std::ostream&   operator<<(std::ostream &out, const Fixed &param);

#endif