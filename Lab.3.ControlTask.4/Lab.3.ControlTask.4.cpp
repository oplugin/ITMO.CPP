// Lab.3.ControlTask.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int sum(int y, int x);

int main()
{
	int a = 5, b = 10;

	cout << sum(b, a) << endl;

	return 0;
}

int sum(int y, int x)
{
	int s = 0;
	if ((y - 1) == x)
		s = y + x;
	else
		s = y + sum(y - 1, x);
	return s;
}