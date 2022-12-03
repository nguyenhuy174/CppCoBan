#pragma once
#include"Nguoi.h"
class Nhanvien :public Nguoi
{
private:
	int salary1Day;
	int ngayCong;
public:
	Nhanvien();
	void input();
	void display();
	void update();
	void setsalary1Day(int);
	void setngayCong(int);
	int getsalary1Day();
	int getngayCong();
	int countSalary();
};

