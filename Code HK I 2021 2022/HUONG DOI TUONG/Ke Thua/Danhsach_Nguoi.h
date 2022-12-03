#pragma once
#include"Nguoi.h"
#include<string>
#define MAX 100
class Danhsach_Nguoi:public Nguoi
{
private:
	Nguoi ds[MAX];
	Nguoi* a;
	int Songuoi;
	int TimMa(string);
	int TimChucvu(string);
public:
	Danhsach_Nguoi();

	void ThemNguoi();
	void XoaNguoi();
	void Update_Nguoi();
	void HienThi_ds();
};

