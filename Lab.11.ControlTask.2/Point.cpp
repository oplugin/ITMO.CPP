#include "Point.h"

using namespace std;

void Point::set_x(double point_x)
{
	Point::x = point_x;
}

double Point::get_x()
{
	return Point::x;
}

void Point::set_y(double point_y)
{
	Point::y = point_y;
}

double Point::get_y()
{
	return Point::y;
}

double Point::get_length()
{
	double value = pow(x, 2) + pow(y, 2);
	return sqrt(value);
}

Point::Point()
{
	Point::set_x(0);
	Point::set_y(0);
}

Point::Point(double point_x, double point_y)
{
	Point::set_x(point_x);
	Point::set_y(point_y);
}

ostream& operator<< (ostream& out, const Point& point1)
{
	stringstream ss;

	ss << "x = " << point1.x << ", y = " << point1.y;

	string str = ss.str();
	out << str << "\"\n";
	return out;
};

bool Point::operator< (const Point& point2) const
{
	bool result = false;
	double point1length = pow(x, 2) + pow(y, 2);
	double point2length = pow(point2.x, 2) + pow(point2.y, 2);

	if (point1length > point2length) {
		result = true;
	}
	if (point1length < point2length) {
		result = false;
	}
	return result;
}
