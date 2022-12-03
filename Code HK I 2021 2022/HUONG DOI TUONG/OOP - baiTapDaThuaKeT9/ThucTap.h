#pragma once
#include "NhanVien.h"
class ThucTap:public virtual NhanVien
{
private:
	float luongThucTap;
	int soNgayThucTap;
public:
	void nhap();
	void xuat();
	float tinhLuong();
};

