#pragma once
#include "Nguoi.h"
class Giangvien :virtual public Nguoi
{
private:
	long luongcoban, heso;
public:
	Giangvien(void);
	~Giangvien(void);
	virtual void nhap();
	virtual void xuat();
	virtual long luong();
};