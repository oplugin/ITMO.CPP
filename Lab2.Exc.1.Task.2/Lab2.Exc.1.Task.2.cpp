// Lab2.Exc.1.Task.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251");
	char op;
	cout << "Сделай свой выбор, собери авто свой мечты: ";
	cin >> op;

	switch (op)
	{
	case 'S':
		cout << "Радио должно играть\n";
		cout << "Колеса круглые\n";
		cout << "Мощный двигатель\n";
	case 'V':
		cout << "Хочу хондиционер \n";
		cout << "Должно играть радио\n";
		cout << "Колеса должны быть круглые\n";
		cout << "Должен быть мощный двигаетль\n";
	default:
		cout << "Колеса должны быть круглые\n";
		cout << "Должен быть мощный двигаетль\n";
	}
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
