#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <vector>
#include "RandomFactory.h"
#include "CircleFactory.h"
#include "EllipseFactory.h"
#include "HelixFactory.h"

using namespace std;

int main()
{
	int curvesAmount = 10;

	RandomFactory randomFactory;
	randomFactory.AddFactory(new CircleFactory());
	randomFactory.AddFactory(new EllipseFactory());
	randomFactory.AddFactory(new HelixFactory());

	vector<Curve3D*> curves;

	for (int i = 0; i < curvesAmount; i++)
	{
		curves.push_back(randomFactory.CreateCurve());
	}

	for (int i = 0; i < curves.size(); i++)
	{
		curves[i]->Info();
		cout << "Point from PI/4: " << curves[i]->GetPoint(M_PI_4) << endl;
		cout << "First derivative from PI/4: " << curves[i]->GetFirstDerivative(M_PI_4) << endl << endl;
	}

	vector<Circle*> circleCurves;
	for (int i = 0; i < curves.size(); i++)
	{
		if (curves[i]->GetType() == CurveType::Circle)
			circleCurves.push_back(dynamic_cast<Circle*>(curves[i]));
	}

	for (int i = 0; i < circleCurves.size(); i++)
	{
		circleCurves[i]->Info();
	}

	return 0;
}