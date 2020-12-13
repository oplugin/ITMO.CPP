// Lab.2.ControlTask.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    system("chcp 1251");
    int year;
    cout << "Введите год : ";
    cin >> year;

    if (year % 4 == 0)
        if (year % 100 == 0 && year % 400 == 0)
        cout << "Високосный";
    else
    {
        cout << "Не високосный";
    }




    //std::cout << "этот год високосный\n";
    //std::cout << "этот год не високосный\n";
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
