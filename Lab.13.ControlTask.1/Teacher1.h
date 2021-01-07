#pragma once
#include "Human1.h"
#include <string>

class Teacher : public Human
{
	// ����������� ������ teacher 
public:
	Teacher(
		string last_name,
		string name,
		string second_name,
		unsigned int_work_time
	) : Human(
		last_name,
		name,
		second_name
	)
	{
		this->work_time = work_time;
	}
	unsigned int get_work_time()
	{
		return this->work_time;
	}

	void get_full_name() override
	{
		cout << "��������� : ";
		get_full_name();
		cout << "\n����� ���-�� ����� : " << get_work_time() << endl;
	}

private:
	unsigned int work_time;
};
