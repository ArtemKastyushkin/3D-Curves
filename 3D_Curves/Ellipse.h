#ifndef ELLIPS_H
#define ELLIPS_H

#include "Curve3D.h"

class Ellipse : public Curve3D
{
public:
	Ellipse();
	Ellipse(double xRadius, double yRadius);

	Vector3D GetPoint(double parameter) override;
	Vector3D GetFirstDerivative(double parameter) override;
private:
	double _xRadius;
	double _yRadius;
};

#endif