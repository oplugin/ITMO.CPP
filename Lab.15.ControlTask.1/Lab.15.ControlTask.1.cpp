// Lab.15.ControlTask.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>

using namespace std;

struct StudentGrade
{
    string name;
    char value;
};

map<string, char> StudentGradeMap;

void AddValueMap(StudentGrade sg);
void ShowValueMap();

int main()
{
    setlocale(LC_ALL, "ru");

    StudentGrade students[5] =
    {
        {"Иванов", '5'},
        {"Петров", '4'},
        {"Сидоров", '3'},
        {"Орлов", '5'},
        {"Иванов", '4'}
    };

    for (int i = 0; i < sizeof(students)/sizeof(students[0]); i++)
    {
        AddValueMap(students[i]);
    }

    ShowValueMap();
}

void AddValueMap(StudentGrade sg)
{
    if (StudentGradeMap.find(sg.name) == StudentGradeMap.end())
    {
        StudentGradeMap.insert(pair<string, char>(sg.name, sg.value));
        cout << "Студент " << sg.name << " добавлен!" << endl;
    }
    else
    {
        cout << "Студент с фамилией " << sg.name << " уже был добавлен!" << endl;
    }
}

void ShowValueMap()
{
    for (auto iter = StudentGradeMap.begin(); iter != StudentGradeMap.end(); ++iter)
    {
        cout << endl << iter->first << " : " << iter->second << endl;
    }
}
