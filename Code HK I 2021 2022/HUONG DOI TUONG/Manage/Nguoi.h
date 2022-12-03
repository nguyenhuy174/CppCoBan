#pragma once
#include<iostream>
using namespace std;
class Nguoi
{
protected:
	int ngay, thang, nam;
	string ID;
public:
	Nguoi(void);
	~Nguoi(void);
	virtual void nhap();
	virtual void xuat();
	virtual long luong();
};