// Lab.3.ControlTask.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int powSqare(double a);
int itterationSqare(double x);

int main()
{
    system("chcp 1251");
    double x; // значение под корнем
    cout << "Введите x: ";
    cin >> x;
    cout << "Стандартная формула : " << powSqare(x) << endl;
    cout << "Итерационная формула : " << itterationSqare(x) << endl;

    return 0;
}

int powSqare(double a)
{
    double b = pow(a, 1.0 / 3);
    return b;
}


int itterationSqare(double x)
{
    double yi = x, // начальное значение y
        yi1 = 0; // значение yi+1

    while (true)
    {
        yi1 = 0.5 * (yi + 3 * x / (2 * yi * yi + x / yi)); // итерационная формула вычисления корня кубического

        if (abs(yi1 - yi) < pow(10.0, -5.0)) // условие окончание итерации
            break; // выход из цикла

        yi = yi1; // сохраняем текущее значение y
    }

    return yi;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
