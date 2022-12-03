#pragma once
#include "nguoi.h"
class nhanvien :virtual public nguoi
{
private:
	int ngaycong;
public:
	nhanvien(void);
	~nhanvien(void);
	virtual void nhap();
	virtual void xuat();
	virtual long luong();
};
