#include "Circle.h"
#include <iostream>

using namespace std;

int main()
{
	Circle circle(23.0);
	Point3D point = circle.GetPoint(M_PI / 4.0);
	cout << point.X << endl;

	return 0;
}