#include "Circle.h"

Circle::Circle() : _radius(0.0) {};
Circle::Circle(double radius) : _radius(radius) {}

Point3D Circle::GetPoint(double parameter)
{
	double x = _radius * cos(parameter);
	double y = _radius * sin(parameter);

	return Point3D(x, y);
}

Point3D Circle::GetFirstDerivative(double parameter)
{
	double x = - _radius * sin(parameter);
	double y = _radius * cos(parameter);

	return Point3D(x, y);
}

double Circle::GetRadius()
{
	return _radius;
}