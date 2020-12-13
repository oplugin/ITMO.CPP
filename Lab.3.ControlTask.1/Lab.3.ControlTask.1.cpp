// Lab.3.ControlTask.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

double lengthTriangle(double x1, double y1, double x2, double y2);
double sqareTriangle(double a, double b, double c);
double sumSqTriangle(double t1, double t2, double t3);


int main()
{
    system("chcp 1251");
    //Координаты вершин треугольника
    double Ax = 0.0, Ay = 0.0;
    double Bx = 7.0, By = 0.0;
    double Cx = 8.0, Cy = 2.0;
    double Dx = 5.0, Dy = 4.0;
    double Ex = 2.0, Ey = 3.0;

    double a, b, c, d, e, g, f; // стороны треугольников
    a = lengthTriangle(Ax, Ay, Ex, Ey);
    cout << "Сторона a : " << a << endl;

    b = lengthTriangle(Ax, Ay, Bx, By);
    cout << "Сторона b : " << b << endl;

    c = lengthTriangle(Bx, By, Cx, Cy);
    cout << "Сторона c : " << c << endl;

    d = lengthTriangle(Cx, Cy, Dx, Dy);
    cout << "Сторона d : " << d << endl;

    e = lengthTriangle(Dx, Dy, Ex, Ey);
    cout << "Сторона e : " << e << endl;

    g = lengthTriangle(Ex, Ey, Cx, Cy);
    cout << "Сторона g : " << g << endl;

    f = lengthTriangle(Ex, Ey, Bx, By);
    cout << "Сторона f : " << f << endl;

    double triangle1 = sqareTriangle(a, b, f);
    double triangle2 = sqareTriangle(f, c, g);
    double triangle3 = sqareTriangle(e, g, d);

    cout << "Площадь 1-го треугольника равна : " << triangle1 << endl;
    cout << "Площадь 2-го треугольника равна : " << triangle2 << endl;
    cout << "Площадь 3-го треугольника равна : " << triangle3 << endl;

    double triangleSum = sumSqTriangle(triangle1, triangle2, triangle3);

    cout << triangleSum << endl;

    return 0;
}

double lengthTriangle(double x1, double y1, double x2, double y2)
{
    double lengthTriangle = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));
    return lengthTriangle;
}

double sqareTriangle(double a, double b, double c)
{
    double p; //полупериметр
    double sqareTriangle; //площадь треугольника

    p = (a + b + c) / 2;

    sqareTriangle = sqrt(p * (p - a) * (p - b) * (p - c));
    return sqareTriangle;
}

double sumSqTriangle(double t1, double t2, double t3)
{
    double sumSqTriangle = t1 + t2 + t3;
    return sumSqTriangle;
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
