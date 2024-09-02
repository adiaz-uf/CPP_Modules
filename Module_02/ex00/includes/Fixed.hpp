#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
    private:
        int              _fixed_point_value;
        static const int _fractional_bits = 0;
    public:
        Fixed(); // Default contructor
        Fixed(const Fixed &copy); // Copy default contructor
        Fixed &operator = (const Fixed &param); // Assigment operator constructor
        ~Fixed(); // Default destructor

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};

#endif