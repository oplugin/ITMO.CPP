// Lab.10.ControlTask.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

class Dot
{

private:
	double x;
	double y;

public:
	Dot() : x(0), y(0) { }

	Dot(double dx, double dy) : x(dx), y(dy) { }

	double distanceTo(Dot point)
	{
		return sqrt(pow(point.x - x, 2) + pow(point.y - y, 2));
	}
};

class Triangle
{
private:
	Dot& ta;
	Dot& tb;
	Dot& tc;

public:
	Triangle(Dot& d1, Dot& d2, Dot& d3) : ta(d1), tb(d2), tc(d3) {}

	void TriangleShowSide()
	{
		cout << "Длинна стороны А равна : " << ta.distanceTo(tb) << endl;
		cout << "Длинна стороны B равна : " << tb.distanceTo(tc) << endl;
		cout << "Длинна стороны C равна : " << tc.distanceTo(ta) << endl;
	}
	void PerimetrTriangle()
	{
		cout << "Периметр треугольника равен : "
			<< ta.distanceTo(tb) + tb.distanceTo(tc) + tc.distanceTo(ta) << endl;
	}
	void SqareTriangle()
	{
		double p = (ta.distanceTo(tb) + tb.distanceTo(tc) + tc.distanceTo(ta)) / 2;
		double s = sqrt(p * (p - ta.distanceTo(tb) * (p - tb.distanceTo(tc)) * (p - tc.distanceTo(ta))));
		cout << "Площадь треугольника равна : " << s;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");

	Dot a(5.0, 4.0);
	Dot b(1.0, 3.0);
	Dot c(6.0, 8.0);

	Triangle tr(a, b, c);
	cout << "Длинны сторон" << endl;
	tr.TriangleShowSide();

	tr.PerimetrTriangle();

	tr.SqareTriangle();
}
