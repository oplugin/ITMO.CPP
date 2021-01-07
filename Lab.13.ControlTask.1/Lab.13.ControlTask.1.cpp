// Lab.13.ControlTask.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <Windows.h>

#include "Human1.h"
#include "Student1.h"
#include "Teacher1.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

    vector<int> scores;

    // Добавление оценок студента в вектор
    scores.push_back(5);
    scores.push_back(3);
    scores.push_back(4);
    scores.push_back(4);
    scores.push_back(5);

    Student* stud = new Student("Петров", "Иван", "Алексеевич", scores);
    stud->get_full_name();

    unsigned int teacher_work_time = 40;
    Teacher* tch = new Teacher("Сергеев", "Дмитрий", "Сергеевич", teacher_work_time);
    tch->get_full_name();
}

