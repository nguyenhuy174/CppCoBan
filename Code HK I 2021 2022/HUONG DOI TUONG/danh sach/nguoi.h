#pragma once
#include<iostream>
using namespace std;
class nguoi
{
protected:
	int ID,ngay, thang, nam;
public:
	nguoi(void);
	~nguoi(void);
	virtual void nhap();
	virtual void xuat();
	virtual long luong();
};