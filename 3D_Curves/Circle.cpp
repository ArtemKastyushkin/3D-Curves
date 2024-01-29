#include "Circle.h"

Circle::Circle() : Ellipse() {};
Circle::Circle(double radius) : Ellipse(radius, radius) {}

double Circle::GetRadius()
{
	return _xRadius;
}