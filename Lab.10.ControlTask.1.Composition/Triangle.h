#pragma once
#include <iostream>
#include <cmath>

using namespace std;

class Triangle
{
public:
	class Dot
	{
	public:
		Dot()
		{
			double x = 0;
			double y = 0;
		}
		Dot(double x, double y)
		{
			this->x = x;
			this->y = y;
		}
		double distanceTo(Dot point)
		{
			return sqrt(pow(point.x - x, 2) + pow(point.y - y, 2));
		}
	private:
		double x;
		double y;
	};

	Dot a;
	Dot b;
	Dot c;

	Triangle();
	Triangle(Dot a, Dot b, Dot c);

	void TriangleShowSide();
	void PerimetrTriangle();
	void SqareTriangle();
};

