// Lab.4.ControlTask.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

double decremenant(double a, double b, double c, double& x1, double& x2);

int main()
{
    setlocale(LC_ALL, "rus");

    cout << "Введите a, b , c" << endl;
    double a, b, c, x1, x2;
    cin >> a >> b >> c;

    decremenant(a, b, c, x1, x2);
}

double decremenant(double a, double b, double c, double &x1, double &x2)
{

    double decremenant;
    decremenant = b * b - 4 * a * c;
    cout << "Декремент равен : " << decremenant << endl;

    if (decremenant > 0)
    {
        x1 = (-b + sqrt(decremenant)) / (2 * a);
        x2 = (-b - sqrt(decremenant)) / (2 * a);
        cout << "x1 : " << x1 << " , x2 : " << x2 << endl;
        return 1;
    }
    else if (decremenant == 0)
    {
        x1 = (-b) / (2 * a);
        x2 = (-b) / (2 * a);
        cout << "x1 : " << x1 << " , x2 : " << x2 << endl;
        return 0;
    }
    else
    {
        cout << "корней нет" << endl;
        return -1;
    }
}