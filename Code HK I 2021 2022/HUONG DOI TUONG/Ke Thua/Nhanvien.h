#pragma once
#include"Nguoi.h"
class Nhanvien :public Nguoi
{
private:
	int LuongNgay;
	int Songaylam;
public:
	Nhanvien();
	void input();
	void output();
	void update();

	void setLuongNgay(int);
	void setSongaylam(int);

	int getLuongNgay();
	int getSongaylam();


	int Tinhluong();
};

