#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point{
    private:
        const Fixed _x;
        const Fixed _y;
    public:
        Point();
        Point(const float x, const float y);
        Point(const Point &tmp);
        ~Point();

        Point& operator=(const Point &tmp);

};

bool bsp(const Point a,const Point b,const Point c,const Point n);

#endif