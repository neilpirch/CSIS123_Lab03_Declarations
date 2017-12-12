// Lab03-Declarations.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	const double PI = 3.1415926;
	const float  E = 2.71828f;
	double radius = 6.85;
	double height = 17.4;
	double diameter, circumference, area;
	double sphereVolume, sphereSurface;
	double cylinderVolume;

	diameter = radius * 2.0;
	circumference = PI * diameter;
	area = PI * radius * radius;

	sphereVolume = (4.0 / 3.0) * PI * radius * radius * radius;
	sphereSurface = 4.0 * PI * radius * radius;

	cylinderVolume = PI * radius * radius * height;

	cout << fixed << setprecision(3) << endl;
	cout << "Diameter of circle      " << setw(10) << diameter << endl;
	cout << "Circumference of circle " << setw(10) << circumference << endl;
	cout << "Area of circle          " << setw(10) << area << endl;
	cout << endl;
	cout << "Volume of sphere        " << setw(10) << sphereVolume << endl;
	cout << "Surface of sphere       " << setw(10) << sphereSurface << endl;
	cout << endl;
	cout << "Cylinder volume         " << setw(10) << cylinderVolume << endl;

	cout << endl;
	system("pause");
	return 0;
}

