#include "Circle.h"

Circle::Circle() : _radius(0.0) {};
Circle::Circle(double radius) : _radius(fabs(radius)) {}

Vector3D Circle::GetPoint(double parameter)
{
	double x = _radius * cos(parameter);
	double y = _radius * sin(parameter);

	return Vector3D(x, y);
}

Vector3D Circle::GetFirstDerivative(double parameter)
{
	double x = -_radius * sin(parameter);
	double y = _radius * cos(parameter);

	return Vector3D(x, y);
}

double Circle::GetRadius()
{
	return _radius;
}