#include "Ellipse.h"

Ellipse::Ellipse() : _xRadius(0.0), _yRadius(0.0) {};
Ellipse::Ellipse(double xRadius, double yRadius) : _xRadius(fabs(xRadius)), _yRadius(fabs(yRadius)) {}

Point3D Ellipse::GetPoint(double parameter)
{
	double x = _xRadius * cos(parameter);
	double y = _yRadius * sin(parameter);

	return Point3D(x, y);
}

Point3D Ellipse::GetFirstDerivative(double parameter)
{
	double x = -_xRadius * sin(parameter);
	double y = _yRadius * cos(parameter);

	return Point3D(x, y);
}