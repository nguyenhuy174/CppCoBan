#pragma once
#include"Nguoi.h"
class Giangvien: public Nguoi
{
private:
	int Heso;
	int Luongcoban;
public:
	Giangvien();
	void input();
	void update();
	void output();

	int Tinhluong();
};

