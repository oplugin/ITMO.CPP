// Lab.2.ControlTask.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    system("chcp 1251");
    srand(time(NULL));

    int x, y; // координаты
    int maxValue;
    int result = 0;
    int shot = 0;
    
    int random = rand() % 5;

    while (result < 30)
    {
        cout << "Введите данные о выстреле в виде пары чисел\n";
        cin >> x;
        cin >> y;

        if (x < 0)
            x = x * -1;
        
        if (y < 0)
        {
            y = y * -1;
        }

        if (x > y)
        {
            maxValue = x;
        }
        else
        {
            maxValue = y;
        }

        if (shot == 3)
            maxValue = maxValue + 5;

        if (maxValue == 1 + random)
        {
            result = result + 10;
            cout << "10 очков\n";
        }
        else if (maxValue == 2 + random)
        {
            result = result + 5;
            cout << "5 очков\n";
        }
        else if (maxValue == 3 + random)
        {
            result = result + 1;
            cout << "1 очко\n";
        }
        else
        {
            result = result + 0;
            cout << "0 очков\n";
        }
        shot++;
    }

    cout << "\nВаш результат : " << result;
    cout << "\nКоличество выстрелов : "<<shot;
    
    if (shot == 3)
    {
        cout << "\nВы снайпер!";
    }
    else if (shot > 3 && shot <= 5)
    {
        cout << "\nВы стрелок!";
    }
    else
    {
        cout << "\nВы новичок!";
    }
    cout << "\n";
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
