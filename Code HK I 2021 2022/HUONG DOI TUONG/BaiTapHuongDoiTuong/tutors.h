#pragma once
#include"human.h"
class tutors :public human
{
private:
	int workTime;
	int SalaryOneHour;
public:
	tutors();

	void update();
	void input();
	void output();

	int countSalary();
};

