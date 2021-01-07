#pragma once
#include "Human1.h"
#include <string>

class Teacher : public Human
{
	// Конструктор класса teacher 
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
		cout << "Профессор : ";
		get_full_name();
		cout << "\nОбщее кол-во часов : " << get_work_time() << endl;
	}

private:
	unsigned int work_time;
};
