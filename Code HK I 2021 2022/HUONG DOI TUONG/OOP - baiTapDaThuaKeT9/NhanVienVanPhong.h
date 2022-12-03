#pragma once
#include"NhanVien.h"
class NhanVienVanPhong:virtual public NhanVien
{
protected:
	float luongCoBan;
	int soNgayLamViec;
public:
	NhanVienVanPhong();

	void nhap();
	void xuat();
	float tinhLuong();
};

