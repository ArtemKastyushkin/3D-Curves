#ifndef VECTOR_3D_H
#define VECTOR_3D_H

#include <ostream>

struct Vector3D
{
public:
    double X;
    double Y;
    double Z;

    Vector3D() : X(0.0), Y(0.0), Z(0.0) {};
    Vector3D(double x, double y, double z = 0.0) : X(x), Y(y), Z(z) {};

    friend std::ostream& operator<<(std::ostream& stream, const Vector3D& vector) {
        stream << "{" << vector.X << ", " << vector.Y << ", " << vector.Z << "}";
        return stream;
    }
};

#endif