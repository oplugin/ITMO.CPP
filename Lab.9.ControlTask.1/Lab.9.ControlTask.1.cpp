// Lab.9.ControlTask.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
    Задание 1. Безопасная реализация класса Triangle 

    Требуется разработать класс Triangle, представляющий треугольник, который 
    задается тремя сторонами.  
    Для класса определить функцию, вычисляющую площадь треугольника по трем 
    сторонам (см. практическое занятие 1).  
    Реализовать генерацию исключительной ситуации при попытке задать стороны 
    недопустимой длины – если хотя бы одна из сторон имеет длину большую, чем 
    сумма двух других сторон. 

*/
#include <iostream>
#include<math.h>

using namespace std;

class Triangle
{
public:
	double a_side, b_side, c_side;

	Triangle(double a, double b, double c)
	{
		a_side = a;
		b_side = b;
		c_side = c;
	}

	double Geron()
	{
		double p = (a_side + b_side + c_side) / 2;
		double s = sqrt(p * (p - a_side) * (p - b_side) * (p - c_side));
		return s;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");

	cout << "Введите стороны треугольника" << endl;
	double sideA, sideB, sideC;
	cin >> sideA >> sideB >> sideC;

	Triangle tr01(sideA, sideB, sideC);

	try
	{
		if (sideA > sideB + sideC)
		{
			throw "A имеет недопустимую длинну";
		}
		else if (sideB > sideA + sideC)
		{
			throw "B имеет недопустимую длинну";
		}
		else if (sideC > sideA + sideB)
		{
			throw "C имеет недопустимую длинну";
		}
		cout << "Площадь треугольника равна : " << tr01.Geron() << endl;
	}
	catch (const char* exception)
	{
		cerr << "Error: " << exception << '\n';
	}
}