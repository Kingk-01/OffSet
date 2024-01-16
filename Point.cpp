//
// Created by Kingkz01 on 24-1-16.
//

#include "Point.h"
void Point::Rotate(int dir)
{
    double PI = acos(-1.0);
    double angle;
    switch (dir){
        case 1:
            angle = PI / 4;
            break;
        case 2:
            angle = PI / 2;
            break;
        case 3:
            angle = 3 * PI / 4;
            break;
        case 4:
            angle = PI;
            break;
        case 5:
            angle = 5 * PI / 4;
            break;
        case 6:
            angle = 3 * PI / 2;
            break;
        case 7:
            angle = 7 * PI / 4;
            break;
        default:
            angle = 0;
            break;
    }
    double nx = cos(angle) * _x - sin(angle) * _y;
    double ny = sin(angle) * _x + cos(angle) * _y;
    _x = nx;
    _y = ny;
}

void Point::Mul(double x)
{
    _x *= x;
    _y *= x;
}

void Point::Init()
{
    double len = Length();
    _x /= len;
    _y /= len;
}