#pragma once
#include"nguoi.h"
#include<vector>
using namespace std;
class quanly
{
private:
	nguoi** x;
	int n;
public:
	quanly(void);
	~quanly(void);
	void nhap();
	void xuat();
};
