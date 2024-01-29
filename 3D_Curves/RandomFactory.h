#ifndef RANDOM_FACTORY_H
#define RANDOM_FACTORY_H

#include "CurveFactory.h"
#include <cstdlib>
#include <ctime>
#include <vector>
#include <iostream>

class RandomFactory : public CurveFactory
{
public:
	RandomFactory()
	{
		std::srand(std::time(nullptr));
	}

	Curve3D* CreateCurve() override
	{
		return _curveFactories[rand() % _curveFactories.size()]->CreateCurve();
	}

	void AddFactory(CurveFactory* curveFactory)
	{
		_curveFactories.push_back(curveFactory);
	}
private:
	std::vector<CurveFactory*> _curveFactories;
};

#endif