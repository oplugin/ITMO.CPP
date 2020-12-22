// Lab.5.ControlTask.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
    Лаб.5 Задание 1. Передача массива в функцию
    Реализуйте созданный вами функционал в упражнениях 1 и 2 в виде
    соответствующих функций, которые будут принимать массив и возвращать
    требуемые результаты.
    Функция должна принимать два параметра: целочисленное значение – размер
    массива и сам массив.
*/

#include <iostream>

using namespace std;

void array_input(int arr[], const int SIZE);
void arraySort(int a[], const int N);

int main()
{
    setlocale(LC_ALL, "rus");

    const int SIZE = 10;
    int mas[SIZE];
    array_input(mas, SIZE);

    arraySort(mas, SIZE);
}

void array_input(int arr[], const int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << "mas[" << i << "]=";
        cin >> arr[i];
    }

    int sum = 0;

    for (int i = 0; i < SIZE; i++)
    {
        sum += arr[i];
    }

    int avg = sum / SIZE;

    cout << "Сумма равна : " << sum << endl;
    cout << "Среднее значение равно : " << avg << endl;
}

void arraySort(int a[], const int N)
{
    int min = 0; // для записи минимального значения 
    int buf = 0; // для обмена значениями

    for (int i = 0; i < N; i++)
    {
        min = i; // номер текущей ячейки, как ячейки с минимальным значением 
     // в цикле найдем реальный номер ячейки с минимальным значением 
        for (int j = i + 1; j < N; j++)
            min = (a[j] < a[min]) ? j : min;
        // перестановка этого элемента, поменяв его местами с текущим 
        if (i != min)
        {
            buf = a[i];
            a[i] = a[min];
            a[min] = buf;
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << a[i] << '\t';
    }
        
    cout << "\n" << endl;
}