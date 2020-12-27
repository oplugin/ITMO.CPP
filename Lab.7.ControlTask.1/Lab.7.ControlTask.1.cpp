// Lab.7.ControlTask.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>

using namespace std;
 
struct Time
{
    int hours;
    int minutes;
    int seconds;

    int sum()
    {
        int sum = hours * 3600 + minutes * 60 + seconds;
        return sum;
    }
};

Time InputTime()
{
    Time t;
    cout << "\nВведите часы : ";
    cin >> t.hours;
    cout << "\nВведите минуты : ";
    cin >> t.minutes;
    cout << "\nВведите секунды : ";
    cin >> t.seconds;
    return t;
}

Time SumTime(const Time time)
{
    Time t = time;
    if (t.hours > 23)
    {
        t.hours -= 24;
        t.hours++;
    }
    
    if (t.minutes > 59)
    {
        t.minutes -= 60;
        t.hours++;
    }

    if (t.seconds > 59)
    {
        t.seconds -= 60;
        t.minutes++;
    }
    return t;
}

//Time SubtractionTime()
//{
//
//}

Time ConvertToSeconds(const Time time)
{
    Time t = time;
    t.hours = time.hours * 3600;
    t.minutes = time.minutes * 60;
    t.seconds = time.seconds;
    return t;
}

void ShowTime(Time t)
{
    cout << "Введеное время с разбивкой: " << t.hours << "\h : " << t.minutes << "\m : " << t.seconds << "\s" << endl;
}


int main()
{
    setlocale(LC_ALL, "rus");

    Time time = InputTime();
    time = SumTime(time);
    ShowTime(time);

    cout << "Суммарное время в секундах : " << time.sum() << " sec" <<  endl;
    return 0;
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
