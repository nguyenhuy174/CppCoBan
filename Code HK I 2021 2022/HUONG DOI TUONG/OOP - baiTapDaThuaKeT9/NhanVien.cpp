#include <iostream>
#include "NhanVien.h"

using namespace std;

NhanVien::NhanVien()
{
	hoten = "";
	luong = 0.0;
}

NhanVien::~NhanVien()
{
	hoten = "";
	luong = 0.0;
}

void NhanVien::nhap()
{
	cout << "Nhap ho va ten: ";
	cin >> this->hoten;
}

void NhanVien::xuat()
{
	cout << this->hoten << "\t" << tinhLuong();
}

float NhanVien::tinhLuong()
{
	return this->luong;
}
