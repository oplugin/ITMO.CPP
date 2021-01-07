// Lab.11.ControlTask.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> // для алгоритма сортировки 

#include "Point.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	vector<Point> v;
	v.push_back(Point(1, 2));
	v.push_back(Point(10, 12));
	v.push_back(Point(21, 7));
	v.push_back(Point(4, 8));
	sort(v.begin(), v.end()); // требуется перегрузка оператора < для класса Point 
	for (auto& point : v)
		std::cout << point << '\n'; // требуется перегрузка оператора << для класса Point 
	return 0;
}