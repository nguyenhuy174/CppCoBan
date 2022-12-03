#pragma once
#include"human.h"
class Employee:public human
{
private:
	int salaryOneDay;
	int dayWork;
public:
	Employee();
	void input();
	void display();
	void update();

	void setSalaryOneDay(int);
	void setDayWork(int);

	int getSalaryOneDay();
	int getDayWork();
	

	int countSalary();

};

