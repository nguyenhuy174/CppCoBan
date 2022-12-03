#pragma once
#include"Nguoi.h"
class Trogiang :public Nguoi
{
private:
	int SoGioLam;
	int LuongGio;
public:
	Trogiang();

	void update();
	void input();
	void output();

	int TinhLuong();
};

