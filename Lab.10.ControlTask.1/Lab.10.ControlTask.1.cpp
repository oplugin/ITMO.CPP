// Lab.10.ControlTask.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
* 
Задание 1. Реализация класса Triangle 

	В этом задании требуется создать класс Triangle, определяемый тремя точками – 
	объектами соответсвующего класса Dot. 
		Элементы класса Triangle: 
		• Три точки – объекты класса Dot.
		• Конструктор.
		• Методы, позволяющие:
		− вывести длины сторон треугольника;
		− расчитать периметр треугольника;
		− расчитать площадь треугольника
		Класс Dot:
		Определяется двумя координатами и функцией – расстоянием между точками.
*/

#include <iostream>
#include <cmath>
#include "Triangle.h"
#include "Dot.h"

using namespace std;


int main()
{
	setlocale(LC_ALL, "ru");

	Dot a(2, 3);
	Dot b(3, 5);
	Dot c(1, 6);

	Triangle tr(a, b, c);
	cout << "Длинны сторон" << endl;
	tr.TriangleShowSide();

	tr.PerimetrTriangle();

	tr.SqareTriangle();
}
