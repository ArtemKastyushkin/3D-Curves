#ifndef CIRCLE_H
#define CIRCLE_H

#include "Ellipse.h"

class Circle: public Ellipse
{
public:
	Circle();
	Circle(double radius);

	CurveType GetType() override;
	double GetRadius();
};

#endif