#include "Dot.h"

Dot::Dot()
{
	x = 0;
	y = 0;
}

Dot::~Dot()
{
}

double Dot::get_x()
{
	return x;
}

void Dot::set_x(double x)
{
	this->x = x;
}

double Dot::get_y()
{
	return y;
}

void Dot::set_y(double y)
{
	this->y = y;
}

Dot::Dot(double x, double y)
{
	this->x = x;
	this->y = y;
}

double Dot::distanceTo(Dot point)
{
	return sqrt(pow(point.x - x, 2) + pow(point.y - y, 2));
}
