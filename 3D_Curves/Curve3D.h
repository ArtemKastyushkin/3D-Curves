#ifndef CURVE_3D_H
#define CURVE_3D_H

#include "Vector3D.h"

class Curve3D
{
public:
    virtual Vector3D GetPoint(double parameter) = 0;
    virtual Vector3D GetFirstDerivative(double parameter) = 0;
};

#endif