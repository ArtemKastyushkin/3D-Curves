#ifndef ELLIPSE_FACTORY_H
#define ELLIPSE_FACTORY_H

#include "CurveFactory.h"
#include "Ellipse.h"

class EllipseFactory : public CurveFactory
{
public:
	Curve3D* CreateCurve()
	{
		return new Ellipse;
	}
};

#endif