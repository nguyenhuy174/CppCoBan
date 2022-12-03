#pragma once
#include "Nguoi.h"
#include<string>
#define MAX 100
class DS_nguoi :public Nguoi
{
private:
	int size;
	Nguoi list[MAX];
	Nguoi* a;
	int findId(string);
	int findMajor(string);
public:
	DS_nguoi();
	void themNguoi();
	void xoaNguoi();
	void updateNguoi();
	void hienThi();
};