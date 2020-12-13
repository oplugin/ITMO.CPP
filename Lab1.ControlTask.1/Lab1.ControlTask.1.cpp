// Lab1.ControlTask.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int sqrGauss(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int x5, int y5);

int main() 
{
    system("chcp 1251");

    int x1, y1;
    int x2, y2;
    int x3, y3;
    int x4, y4;
    int x5, y5;

    int A; // площать пятиугольника

    cout << "Введите координаты вершин x1, y1,\n";
    cin >> x1;
    cin >> y1;

    cout << "Введите координаты вершин x2, y2,\n";
    cin >> x2;
    cin >> y2;

    cout << "Введите координаты вершин x3, y3,\n";
    cin >> x3;
    cin >> y3;

    cout << "Введите координаты вершин x4, y4,\n";
    cin >> x4;
    cin >> y4;

    cout << "Введите координаты вершин x5, y5,\n";
    cin >> x5;
    cin >> y5;
    
    sqrGauss(x1, y1, x2, y2, x3, y3, x4, y4, x5, y5);
}

int sqrGauss(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int x5, int y5)
{
    int A = (x1 * y2 + x2 * y3 + x3 * y4 + x4 * y5 + x5 * y1 - x2 * y1 - x3 * y2 - x4 * y3 - x5 * y4 - x1 * y5) / 2;
    if (A < 0)
        A = A * -1;
    cout << "Площадь многоуольника равна : " << A;
    return A;
}
