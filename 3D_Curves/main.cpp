#define _USE_MATH_DEFINES
#include <cmath>
#include "Circle.h"
#include <iostream>

using namespace std;

int main()
{
	Circle circle(23.0);
	cout << circle.GetPoint(M_PI / 4.0) << endl;

	return 0;
}