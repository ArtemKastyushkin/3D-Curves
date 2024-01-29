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
		cout << curves[i]->GetType() << endl;
	}


	return 0;
}