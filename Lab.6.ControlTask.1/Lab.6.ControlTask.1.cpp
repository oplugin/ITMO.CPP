// Lab.6.ControlTask.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
    Задание 1. Запись текста в файл
    Требуется написать программу для записи небольшого стихотворения с
    клавиатуры в текстовый файл.
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    system("chcp 1251");
    setlocale(LC_ALL, "ru");

    string path = "myFile.txt";
    ofstream fout;

    fout.open(path, ofstream::app);

    if (!fout.is_open())
    {
        cout << "Ошибка открытия файла!" << endl;
    }
    else
    {
        for (int i = 0; i < 4; i++)
        {
            cout << "Введите строку стихотворения!" << endl;
            string a;
            cin >> a;
            fout << a;
            fout << "\n";
        }
    }

    fout.close();
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
