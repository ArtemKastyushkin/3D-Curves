#include "Circle.h"

Circle::Circle() : Ellipse() {};
Circle::Circle(double radius) : Ellipse(radius, radius) {}

CurveType Circle::GetType()
{
	return CurveType::Circle;
}

double Circle::GetRadius()
{
	return _xRadius;
}