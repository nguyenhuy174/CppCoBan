#pragma once
#include"Nguoi.h"
#include<vector>
using namespace std;

class Quanly
{
private:
	Nguoi** x;
	int n;
public:
	Quanly(void);
	~Quanly(void);
	void nhap();
	void xuat();
};
