// Lab.3.ControlTask.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

double sqareTriangle(double a);
double sqareTriangle(double a, double b, double c);

int main()
{
    system("chcp 1251");
    double a , b, c;
    
    int answer;
    cout << "Выберите тип треугольника" << endl;
    cout << "Если одностороний, то введите 1, если разносторонний то введите 2" << endl;
    cin >> answer;
    if (answer == 1)
    {
        cout << "Введите длинну стороны" << endl;
        cin >> a;
        cout << "Площадь равносторонего треугольника равна : " << sqareTriangle(a) << endl;
    }
    else if(answer == 2)
    {
        cout << "Введите длинну 3-х сторон" << endl;
        cin >> a >> b >> c;
        cout << "Площадь разностороннего треугольника равна : " << sqareTriangle(a, b, c) << endl;
    }
    else
    {
        cout << "Вы не выбрали вариант" << endl;
    }
    
    return 0;
}

double sqareTriangle(double a)
{
    double s = (pow(a,2) * sqrt(3)) / 4;
    return s;
}

double sqareTriangle(double a, double b, double c)
{
    double p; //полупериметр
    double sqareTriangle; //площадь треугольника

    p = (a + b + c) / 2;

    sqareTriangle = sqrt(p * (p - a) * (p - b) * (p - c));
    return sqareTriangle;
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
