// Lab.9.ControlTask.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

/*
	Задание 2. Безопасная реализация класса Time

	Добавьте в класс Time класс, реализующий возможность реагировать на
	исключительные ситуации, возникающие, например, при создании
	«неправильных» объектов, проведении операций с объектами класса и т.д.
*/

class Time
{
public:
	int class_hours;
	int class_minutes;
	int class_seconds;

	Time();
	Time(int h, int m, int s);
	~Time();

	class MyException
	{
	public:
		string message;
		int value;
		MyException(string msg, int vl)
		{
			message = msg;
			value = vl;
		}
	};

};

Time PrintTime(const Time time)
{
	/*
		Создайте метод класса, который будет выводить значения полей на экран в
		формате 11:59:59
	*/
	Time t = time;

	if (t.class_hours > 11)
	{
		t.class_hours -= 12;
	}
	if (t.class_minutes > 59)
	{
		t.class_minutes -= 60;
		t.class_hours++;
	}
	if (t.class_seconds > 59)
	{
		t.class_seconds -= 60;
		t.class_minutes++;
	}

	cout << "\nTime : " << endl;
	cout << t.class_hours << ":" << t.class_minutes << ":" << t.class_seconds << endl;

	return t;
}

Time SumTimes(const Time time01, const Time time02)
{
	Time t;
	t.class_hours = time01.class_hours + time02.class_hours;
	t.class_minutes = time01.class_minutes + time02.class_minutes;
	t.class_seconds = time01.class_seconds + time02.class_seconds;
	return t;
}

Time::Time()
{
	class_hours = 0;
	class_minutes = 0;
	class_seconds = 0;
}

Time::Time(int h, int m, int s)
{
	class_hours = h;
	class_minutes = m;
	class_seconds = s;

	if (class_hours > 11)
	{
		class_hours -= 12;
	}
	if (class_minutes > 59)
	{
		class_minutes -= 60;
		class_hours++;
	}
	if (class_seconds > 59)
	{
		class_seconds -= 60;
		class_minutes++;
	}
	if (h < 0 || h > 23)
	{
		throw MyException("Введите часы в формате от 0 до 24", h);
	}
	if (m < 0 || m > 119)
	{
		throw MyException("Введите минуты в формате от 0 до 119", m);
	}
	if (s < 0 || s > 119)
	{
		throw MyException("Введите минуты в формате от 0 до 119", s);
	}

}

Time::~Time()
{
}

int main()
{
	setlocale(LC_ALL, "ru");

	try
	{
		Time Time01(13, 65, 75);
		cout << "Class 01";
		PrintTime(Time01);

		Time Time02(10, 155, 90);
		cout << "\nClass 02";
		PrintTime(Time02);

		Time Time03(0, 0, 0);

		Time03 = SumTimes(Time01, Time02);
		PrintTime(Time03);
	}
	catch (Time::MyException &ex)
	{
		cout << ex.message << "\nТекущее значение " << ex.value << endl;
	}
	

	// в дальнейшем учтите, что при сложении Time03 = SumTimes(Time01, Time02); 
	// можно передавать один параметр
}