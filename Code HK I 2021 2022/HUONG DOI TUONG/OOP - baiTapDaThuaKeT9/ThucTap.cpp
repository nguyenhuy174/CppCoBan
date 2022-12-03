#include <iostream>
#include "ThucTap.h"

using namespace std;

void ThucTap::nhap()
{
	cout << "------------Nhap thong tin Nhan Vien Thuc Tap--------------\n";
	NhanVien::nhap();
	cout << "Nhap so gio lam: "; cin >> this->soNgayThucTap;
	cout << "Nhap luong 1 gio lam: "; cin >> this->luongThucTap;
}

void ThucTap::xuat()
{
	cout << this->hoten << "\t" << tinhLuong();
}

float ThucTap::tinhLuong()
{
	return this->soNgayThucTap * this->luongThucTap;
}

