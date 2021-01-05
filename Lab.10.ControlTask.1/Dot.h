#pragma once
#include <cmath>

using namespace std;

class Dot
{
private:
	double x;
	double y;

public:
	Dot();
	~Dot();
	double get_x();
	void set_x(double dx);
	double get_y();
	void set_y(double dy);
	Dot(double x, double y);
	double distanceTo(Dot point);
};

