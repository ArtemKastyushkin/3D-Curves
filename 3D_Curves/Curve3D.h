#ifndef CURVE_3D_H
#define CURVE_3D_H

#include "Vector3D.h"
#include "Randomizer.h"
#include <iostream>

using namespace std;

enum class CurveType {Circle, Ellipse, Helix};

inline ostream& operator << (ostream& stream, const CurveType& curveType)
{
    switch (curveType) {
    case CurveType::Circle: return (stream << "Circle");
    case CurveType::Ellipse: return (stream << "Ellipse");
    case CurveType::Helix: return (stream << "Helix");
    }

    return (stream);
}

class Curve3D
{
public:
    virtual Vector3D GetPoint(double parameter) = 0;
    virtual Vector3D GetFirstDerivative(double parameter) = 0;
    virtual CurveType GetType() = 0;
    virtual void Info() = 0;
    virtual ~Curve3D() {};
};

#endif