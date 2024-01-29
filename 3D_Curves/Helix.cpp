#include "Helix.h"

Helix::Helix() : _radius(Randomizer::GetValue()), _step(Randomizer::GetValue()) {};
Helix::Helix(double radius, double step) : _radius(fabs(radius)), _step(step) {}

Vector3D Helix::GetPoint(double parameter)
{
	double x = _radius * cos(parameter);
	double y = _radius * sin(parameter);
	double z = _step / (2 * M_PI) * parameter;

	return Vector3D(x, y, z);
}

Vector3D Helix::GetFirstDerivative(double parameter)
{
	double x = -_radius * sin(parameter);
	double y = _radius * cos(parameter);
	double z = _step / (2 * M_PI);

	return Vector3D(x, y, z);
}

CurveType Helix::GetType()
{
	return CurveType::Helix;
}

void Helix::Info()
{
	cout << GetType() << ": r = " << _radius << " h = " << _step << endl;
}