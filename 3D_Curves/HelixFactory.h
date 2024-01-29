#ifndef HELIX_FACTORY_H
#define HELIX_FACTORY_H

#include "CurveFactory.h"
#include "Helix.h"

class HelixFactory : public CurveFactory
{
public:
	Curve3D* CreateCurve()
	{
		return new Helix;
	}
};

#endif