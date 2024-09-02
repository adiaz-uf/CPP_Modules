#include "Point.hpp"

Point::Point() : x(0), y(0)
{
    
}

Point::Point(const float float_x, const float float_y) : x(float_x), y(float_y)
{
    
}

Point::Point(const Point &copy) : x(copy.x), y(copy.y)
{
    *this = copy;
}   

Point &Point::operator=(const Point &assig)
{
    (Fixed)this->x = assig.getX();
    (Fixed)this->y = assig.getY();
    return *this;
}

Point::~Point()
{

}   

// Getters

Fixed Point::getX() const
{
    return this->x;
}

Fixed Point::getY() const
{
    return this->y;
}   


