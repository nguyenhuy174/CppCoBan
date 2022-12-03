#pragma once
#include "NhanVien.h"
class NhanVienSanXuat:virtual public NhanVien
{
protected:
	int soSanPham;
	float tienCong1SP;
public:
	void nhap();
	void xuat();
	float tinhLuong();
};

