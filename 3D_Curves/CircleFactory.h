#ifndef CIRCLE_FACTORY_H
#define CIRCLE_FACTORY_H

#include "CurveFactory.h"
#include "Circle.h"

class CircleFactory : public CurveFactory
{
public:
	Curve3D* CreateCurve()
	{
		return new Circle;
	}
};

#endif