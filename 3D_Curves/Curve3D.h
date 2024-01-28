#ifndef CURVE_3D_H
#define CURVE_3D_H

#include "Point3D.h"
#define _USE_MATH_DEFINES
#include <cmath>

class Curve3D
{
public:
    virtual Point3D GetPoint(double parameter) = 0;
    virtual Point3D GetFirstDerivative(double parameter) = 0;
};

#endif