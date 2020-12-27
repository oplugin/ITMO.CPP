// Lab.7.ControlTask.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>

using namespace std;

struct QEquation
{
    double x1, x2;
};


QEquation InputParameters()
{
    double a, b, c;
    cout << "Введите a, b, c" << endl;
    cin >> a >> b >> c;

    double discriminant;
    discriminant = b * b - 4 * a * c;

    QEquation q;

    if (discriminant > 0)
    {
        q.x1 = (-b + sqrt(discriminant)) / (2 * a);
        q.x2 = (-b - sqrt(discriminant)) / (2 * a);
    }
    else if (discriminant == 0)
    {
        q.x1 = (-b) / (2 * a);
        q.x2 = (-b) / (2 * a);
    }
    return q;
}

int main()
{
    setlocale(LC_ALL, "rus");
       
    QEquation qe = InputParameters();
    cout <<"\nx1 : " << qe.x1<<"\nx2 : " << qe.x2 << endl;

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
