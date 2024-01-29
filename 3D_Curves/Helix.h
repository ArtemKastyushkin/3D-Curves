#ifndef HELIX_H
#define HELIX_H

#include "Curve3D.h"

class Helix : public Curve3D
{
public:
	Helix();
	Helix(double radius, double step);

	Vector3D GetPoint(double parameter) override;
	Vector3D GetFirstDerivative(double parameter) override;
private:
	double _radius;
	double _step;
};

#endif