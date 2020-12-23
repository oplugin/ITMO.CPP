// Lab.6.ControlTask.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

using namespace std;

bool from_min(const int a, const int b);
bool from_max(const int a, const int b);
void bubble_sort(int Arr[], const int N, bool (*compare)(int a, int b));

void writeArray(int array[]);

int main()
{
    system("chcp 1251");
    //setlocale(LC_ALL, "rus");

    const int SIZE = 10;
    int my_choose = 0;

    int array[SIZE] = { 9,8,7,6,1,2,3,5,4,9 };

    writeArray(array);

    switch (my_choose)
    {
    case 1: bubble_sort(array, SIZE, from_min);
        break;
    case 2: bubble_sort(array, SIZE, from_max);
        break;
    default:
        cout << "\rНеизвестная операция ";
    }

    writeArray(array);

}

void writeArray(int array[])
{
    string path = "myFile.txt";
    ofstream fout;
    fout.open(path, ofstream::app);

    if (!fout.is_open())
    {
        cout << "Ошибка открытия файла!" << endl;
    }
    else
    {
        cout << "Файл открыт!" << endl;
        fout.write((char*)&array, sizeof(array));
    }
    fout.close();
}

bool from_min(const int a, const int b)
{
    return a > b;
}
bool from_max(const int a, const int b)
{
    return a < b;
}

void bubble_sort(int Arr[], const int N, bool (*compare)(int a, int b))
{
    for (int i = 1; i < N; i++)
    {
        for (int j = 0; j < N - 1; j++)
        {
            if ((*compare)(Arr[j], Arr[j + 1])) swap(Arr[j], Arr[j + 1]);
        }
    }
}