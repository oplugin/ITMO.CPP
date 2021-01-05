#include "Triangle.h"

Triangle::Triangle()
{
	Dot a(0,0);
	Dot b(0,0);
	Dot c(0,0);
}

Triangle::Triangle(Dot a, Dot b, Dot c)
{
	this->a = a;
	this->b = b;
	this->c = c;
}

void Triangle::TriangleShowSide()
{
	cout << "Длинна стороны А равна : " << a.distanceTo(b) << endl;
	cout << "Длинна стороны B равна : " << b.distanceTo(c) << endl;
	cout << "Длинна стороны C равна : " << c.distanceTo(a) << endl;
}

void Triangle::PerimetrTriangle()
{
	cout << "Периметр треугольника равен : "
		<< a.distanceTo(b) + b.distanceTo(c) + c.distanceTo(a) << endl;
}

void Triangle::SqareTriangle()
{
	double p = (a.distanceTo(b) + b.distanceTo(c) + c.distanceTo(a)) / 2;
	double s = sqrt(p * (p - a.distanceTo(b) * (p - b.distanceTo(c)) * (p - c.distanceTo(a))));
	cout << "Площадь треугольника равна : " << s;
}
