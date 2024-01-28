#ifndef CURVE_3D_H
#define CURVE_3D_H

#include "Point3D.h"

class Curve3D
{
public:
    virtual Curve3D GetPoint() = 0;
    virtual Curve3D GetFirstDerivative() = 0;
};

#endif