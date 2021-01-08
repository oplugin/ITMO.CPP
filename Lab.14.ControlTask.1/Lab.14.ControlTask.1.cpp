// Lab.14.ControlTask.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

void sorting(int arr[], int size) {
	int j = 0;
	for (int i = 0; i < size; i++) {
		int x = arr[i];
		for (j = i - 1; j >= 0 && x < arr[j]; j--)
			arr[j + 1] = arr[j];
		arr[j + 1] = x;
	}
}

template<class T>
void sorting(T arr[], int size) {
	int j = 0;
	for (int i = 0; i < size; i++) {
		T x = arr[i];
		for (j = i - 1; j >= 0 && x < arr[j]; j--)
			arr[j + 1] = arr[j];
		arr[j + 1] = x;
	}
}

template<class T>
void printing(T arr[], int size) {
	int j = 0;
	for (int i = 0; i < size; i++) {

		cout << arr[i] << ";";
	}
	cout << endl;
}

template <typename T> double arrayAverage(T A[], int size)
{
	double sr = 0;
	for (int i = 0; i < size; i++)
	{
		sr += A[i];
	}
	return sr / size;
}

int main()
{
	setlocale(LC_ALL, "ru");

	int arr[] = { 20,3,11,1,3,4,55 };
	double arrd[] = { 3.1,1.3,7.7,1.6,5.4,9.9,5.7 };
	char arrc[] = "Hello, world";
	int k1 = sizeof(arr) / sizeof(arr[0]);
	int k2 = sizeof(arrd) / sizeof(arrd[0]);
	int k3 = sizeof(arrc) / sizeof(arrc[0]) - 1;

	
	cout << "Печать массива: " << endl;
	printing(arr, k1);
	cout << "Сортировка: " << endl;
	sorting(arr, k1);
	printing(arr, k1);
	cout << "Среднее арифметическое: " << endl;
	cout << arrayAverage(arr, k1) << endl;

	cout << endl;

	cout << "Печать массива:" << endl;
	printing(arrd, k2);
	cout << "Сортировка: " << endl;
	sorting(arrd, k2);
	printing(arrd, k2);
	cout << "Среднее арифметическое : " << endl;
	cout << arrayAverage(arrd, k2) << endl;

	cout << endl;

	cout << "Печать массива:" << endl;
	printing(arrc, k3);
	cout << "Сортировка: " << endl;
	sorting(arrc, k3);
	printing(arrc, k3);
	cout << "Среднее арифметическое : " << endl;
	cout << arrayAverage(arrc, k3) << endl;

	return 0;
}