#pragma once
#include "Human1.h"
#include <string>
#include <vector>

class Student : public Human
{
public:
    // ����������� ������ Student 
    Student(std::string last_name, std::string name, std::string
        second_name,
        std::vector<int> scores) : Human(last_name, name,
            second_name) {
        this->scores = scores;
    }
    // ��������� �������� ����� �������� 
    float get_average_score()
    {
        // ����� ���������� ������ 
        unsigned int count_scores = this->scores.size();
        // ����� ���� ������ �������� 
        unsigned int sum_scores = 0;
        // ������� ���� 
        float average_score;

        for (unsigned int i = 0; i < count_scores; ++i) {
            sum_scores += this->scores[i];
        }

        average_score = (float)sum_scores / (float)count_scores;
        return average_score;
    }

    void get_full_name() override
    {
        cout << "������� : ";
        get_full_name();
        cout << "\n������ : " << get_average_score() << endl;
    }

private:
    // ������ �������� 
    vector<int> scores;
};
