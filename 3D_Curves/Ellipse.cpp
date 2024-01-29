#include "Ellipse.h"

Ellipse::Ellipse() : _xRadius(Randomizer::GetValue()), _yRadius(Randomizer::GetValue()) {};
Ellipse::Ellipse(double xRadius, double yRadius) : _xRadius(fabs(xRadius)), _yRadius(fabs(yRadius)) {}

Vector3D Ellipse::GetPoint(double parameter)
{
	double x = _xRadius * cos(parameter);
	double y = _yRadius * sin(parameter);

	return Vector3D(x, y);
}

Vector3D Ellipse::GetFirstDerivative(double parameter)
{
	double x = -_xRadius * sin(parameter);
	double y = _yRadius * cos(parameter);

	return Vector3D(x, y);
}

CurveType Ellipse::GetType()
{
	return CurveType::Ellipse;
}
