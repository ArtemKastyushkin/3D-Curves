#include "Circle.h"

Circle::Circle() : Ellipse() {};
Circle::Circle(double radius) : Ellipse(radius, radius) {}

CurveType Circle::GetType()
{
	return CurveType::Circle;
}

void Circle::Info()
{
	cout << GetType() << ": r = " << _xRadius << endl;
}

double Circle::GetRadius()
{
	return _xRadius;
}