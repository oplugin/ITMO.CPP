// Lab.2.ControlTask.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

//int main1()
//{
//	int k1 = 1;
//	int k5 = 5;
//	int k10 = 10;
//	int k50 = 50;
//
//	int sum;
//	cout << "Введите число для размена";
//	cin >> sum;
//
//	int n = 100;
//	int razmen;
//
//	int counter = 0;
//
//	for (int i = 1; i <= n; i++)
//	{
//		if (sum % k50 == 0)
//			counter++;
//		else if (true)
//		{
//
//		}
//	}
//}
int main()
{
	int nominals[] = { 50, 20, 10, 5, 2, 1 };

	int sum;
	cout << "Введите сумму : ";
	cin >> sum;
	int i = 0, amount;
	while (sum > 0) 
	{
		if (sum >= nominals[i]) 
		{
			amount = sum / nominals[i];

			cout << "В сумме денег содержится: " << amount << " монет(а) номиналом"
				<< nominals[i] << " копеек" << endl;
			sum = sum - amount * nominals[i];
			i++;
		}
		else 
		{
			i++;
		}
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
