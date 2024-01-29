#ifndef HELIX_H
#define HELIX_H

#define _USE_MATH_DEFINES
#include <cmath>

#include "Curve3D.h"

class Helix : public Curve3D
{
public:
	Helix();
	Helix(double radius, double step);

	Vector3D GetPoint(double parameter) override;
	Vector3D GetFirstDerivative(double parameter) override;
	CurveType GetType() override;
	void Info() override;
private:
	double _radius;
	double _step;
};

#endif