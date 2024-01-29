#ifndef CURVE_FACTORY_H
#define CURVE_FACTORY_H

#include "Curve3D.h"

class CurveFactory
{
public:
	virtual Curve3D* CreateCurve() = 0;
	virtual ~CurveFactory() {};
};

#endif