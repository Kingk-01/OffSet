//
// Created by Kingkz01 on 24-1-16.
//

#ifndef OFFSET_POINT_H
#define OFFSET_POINT_H

#include <cmath>
#include <vector>

class Point
{
public:
    Point(/* args */){}
    Point(double x, double y) : _x(x), _y(y){}

    double GetX() const
    {
        return _x;
    }

    double GetY() const
    {
        return _y;
    }

    double Length() const
    {
        return std::sqrt(_x * _x + _y * _y);
    }

    void SetX(double x)
    {
        _x = x;
    }

    void SetY(double y)
    {
        _y = y;
    }


    bool operator == (const Point &b)
    {
        return (fabs(_x - b._x) < 1e-6) && (fabs(_y - b._y) < 1e-6);
    }

    bool operator != (const Point &b)
    {
        return (fabs(_x - b._x) > 1e-6) || (fabs(_y - b._y) > 1e-6);
    }

    void Rotate(int dir);

    void Mul(double x);

    void Init();


private:
    double _x;
    double _y;
};


#endif //OFFSET_POINT_H
