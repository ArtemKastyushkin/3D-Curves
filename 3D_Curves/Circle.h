#ifndef CIRCLE_H
#define CIRCLE_H

#include "Curve3D.h"

class Circle: public Curve3D
{
public:
	Circle();
	Circle(double radius);

	Vector3D GetPoint(double parameter) override;
	Vector3D GetFirstDerivative(double parameter) override;
	double GetRadius();
private:
	double _radius;
};

#endif