#ifndef POINT_3D_H
#define POINT_3D_H

struct Point3D
{
public:
    double X;
    double Y;
    double Z;

    Point3D() : X(0.0), Y(0.0), Z(0.0) {};
    Point3D(double x, double y, double z = 0.0) : X(x), Y(y), Z(x) {};
};

#endif