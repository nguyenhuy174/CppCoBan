#pragma once
#include <string>

using namespace std;

class NhanVien
{
protected:
	string hoten;
	float luong;
public:
	NhanVien();
	~NhanVien();
	virtual void nhap();
	virtual void xuat();
	virtual float tinhLuong();
};

