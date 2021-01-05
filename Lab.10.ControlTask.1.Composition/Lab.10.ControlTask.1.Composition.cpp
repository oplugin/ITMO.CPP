// Lab.10.ControlTask.1.Composition.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include "Triangle.h"

using namespace std;


int main()
{
	setlocale(LC_ALL, "ru");

	Triangle::Dot a(4, 3);
	Triangle::Dot b(3, 5);
	Triangle::Dot c(1, 6);

	Triangle tr(a, b, c);
	cout << "Длинны сторон" << endl;
	tr.TriangleShowSide();

	tr.PerimetrTriangle();

	tr.SqareTriangle();
}