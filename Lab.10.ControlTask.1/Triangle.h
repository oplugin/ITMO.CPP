#pragma once

#include <iostream>
#include "Dot.h"
#include <cmath>

using namespace std;

class Triangle
{
public:
	Dot a;
	Dot b;
	Dot c;

	Triangle();
	Triangle(Dot a, Dot b, Dot c);

	void TriangleShowSide();
	void PerimetrTriangle();
	void SqareTriangle();
};

