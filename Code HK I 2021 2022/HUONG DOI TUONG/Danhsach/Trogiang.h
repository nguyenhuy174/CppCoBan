#pragma once
#include"Nguoi.h"
class Trogiang :public Nguoi
{
private:
	int gioCong;
	int Luong1gio;
public:
	Trogiang();
	void update();
	void input();
	void output();
	int countSalary();
};

