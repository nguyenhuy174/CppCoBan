#pragma once
#include "Nguoi.h"
class Nhanvien :virtual public Nguoi
{
private:
	int ngaycong;
public:
	Nhanvien(void);
	~Nhanvien(void);
	virtual void nhap();
	virtual void xuat();
	virtual long luong();
};
