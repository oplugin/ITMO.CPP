
#include <iostream>
#include <string>

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

	operator int() const
	{
		int result;
		result = 60 * 60 * class_hours + 60 * class_minutes + class_seconds;
		return result;
	}

	friend Time operator+(const Time& d1, int value);
	friend Time operator+(int value, const Time& d1);

	// Перегрузка оператора сложения - сложение объектов Time
	Time operator+(const Time& t) const
	{
		Time sum;
		sum.class_seconds = class_seconds + t.class_seconds;
		sum.class_minutes = class_minutes + t.class_minutes + sum.class_seconds / 60;
		sum.class_hours = class_hours + t.class_hours + sum.class_minutes / 60;
		sum.class_seconds %= 60;
		sum.class_minutes %= 60;
		return sum;
	}

	// Перегрузка оператора вычитания - вычитание объектов Time
	Time operator-(const Time& t) const
	{
		Time diff;
		int tot1, tot2;
		tot1 = t.class_seconds + 60 * t.class_minutes;
		tot2 = class_seconds + 60 * class_minutes;
		tot1 = t.class_minutes + 60 * t.class_hours;
		tot2 = class_minutes + 60 * class_hours;

		diff.class_seconds = (tot2 - tot1) % 60;
		diff.class_minutes = (tot2 - tot1) % 60;
		diff.class_hours = (tot2 - tot1) / 60;

		return diff;
	}

	// Cравнение двух объектов Time
	int operator>(const Time& time02) const
	{
		int result = 0;
		int time01SumSeconds = class_seconds + class_minutes * 60 + class_hours * 3600;
		int time02SumSeconds = time02.class_seconds + time02.class_minutes * 60 + time02.class_hours * 3600;

		if (time01SumSeconds > time02SumSeconds)
		{
			result = 1;
		}
		else if (time01SumSeconds < time02SumSeconds)
		{
			result = -1;
		}
		return result;
	}
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

 //Сложение объекта Time и переменной вещественного типа
Time operator+(const Time& t, int value)
{
	Time rez;
	rez.class_seconds = t.class_seconds + value;
	rez.class_minutes = t.class_minutes + value;
	rez.class_hours = t.class_hours + value;
	return rez;
}

 //Сложение переменной вещественного типа и объект Time,
Time operator+(int value, const Time& t)
{
	return (t + value);
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

		Time Time02(10, 45, 90);
		cout << "\nClass 02";
		PrintTime(Time02);

		Time time04(0, 0, 0);
		time04 = Time01 + Time02;
		PrintTime(time04);

		Time time05(0, 0, 0);
		time05 = Time01 - Time02;
		PrintTime(time05);

		cout << endl;

		int k = 30;
		int result = Time01 + k;
		cout <<"Сложение объекта Time и переменной вещественного типа : " << result << endl;

		int result2 = k + Time02;
		cout << "Сложение переменной вещественного типа и объект Time : "<< result2 << endl;


		int diff = Time01 > Time02;
		cout << "\nCравнение двух объектов Time : " << diff << endl;

		if (diff == 1)
		{
			cout << "Первый объект больше второго" << endl;
		}
		else
		{
			cout << "Второй объект больше первого" << endl;
		}

	}
	catch (Time::MyException &ex)
	{
		cout << ex.message << "\nТекущее значение " << ex.value << endl;
	}

	// в дальнейшем учтите, что при сложении Time03 = SumTimes(Time01, Time02); 
	// можно передавать один параметр
}
