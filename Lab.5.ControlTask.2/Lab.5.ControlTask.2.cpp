// Lab.5.ControlTask.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
	Лаб.5 Задание 2. Возврат массива из функции
	➢ В качестве результата работы функции может быть указатель на массив, создаваемый
	в этой функции.
	Дано: в функции main() объявлены два массива равного размера. В результате
	вызова функции max_vect() возвращается массив, состоящий из больших
	элементов, стоящих на соответствующих местах в исходных массивах
*/

#include <iostream>

using namespace std;

int* max_vect(int kc, int a[], int b[]);

int main()
{
	setlocale(LC_ALL, "rus");

	int a[] = { 1,2,3,4,5,6,7,2 };
	int b[] = { 7,6,5,4,3,2,1,3 };

	int kc = sizeof(a) / sizeof(a[0]);	//Количество элементов массива 
	int* c;								//Указатель на результирующий массив 
	c = max_vect(kc, a, b);				//вызов функции для создания массива 

	for (int i = 0; i < kc; i++)		//Вывод результата. 
		cout << c[i] << " ";
	cout << endl;
	delete[] c;							//Возврат памяти. 
}

int* max_vect(int kc, int a[], int b[])
{
	for (int i = 0; i < kc; i++)
	{
		if (a[i] < b[i])
		{
			swap(a[i], b[i]);
		}
	}
	return a;
}

