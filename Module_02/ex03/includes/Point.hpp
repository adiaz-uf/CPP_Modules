#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
    private:
        Fixed const x;
        Fixed const y;
    public:
        Point();
        Point(const float float_x, const float float_y);
        Point(const Point &copy);               
        Point &operator= (const Point &assig);
        ~Point();      

        Fixed getX() const;
        Fixed getY() const;                         
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif