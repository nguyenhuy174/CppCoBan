#pragma once
#include "nguoi.h"
class giangvien :virtual public nguoi
{
private:
	long luongcoban, heso;
public:
	giangvien(void);
	~giangvien(void);
	virtual void nhap();
	virtual void xuat();
	virtual long luong();
};