#ifndef HELIX_H
#define HELIX_H

#include "Curve3D.h"

class Helix : public Curve3D
{
public:
	Helix();
	Helix(double radius, double step);

	Point3D GetPoint(double parameter) override;
	Point3D GetFirstDerivative(double parameter) override;
private:
	double _radius;
	double _step;
};

#endif