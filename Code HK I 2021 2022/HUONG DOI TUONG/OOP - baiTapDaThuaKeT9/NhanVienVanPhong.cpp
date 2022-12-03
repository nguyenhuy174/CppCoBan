#include <iostream>
#include "NhanVienVanPhong.h"

using namespace std;

NhanVienVanPhong::NhanVienVanPhong(): NhanVien()
{
	this->luongCoBan = luongCoBan;
	this->soNgayLamViec = soNgayLamViec;
}

void NhanVienVanPhong::nhap()
{
	cout << "------------Nhap thong tin Nhan Vien Van Phong--------------\n";
	NhanVien::nhap();
	cout << "Nhap luong co ban: "; cin >> this->luongCoBan;
	cout << "Nhap so ngay lam viec: "; cin >> this->soNgayLamViec;
}

void NhanVienVanPhong::xuat()
{
	cout << this->hoten << "\t" << tinhLuong();
}

float NhanVienVanPhong::tinhLuong()
{
	return this->luongCoBan * this->soNgayLamViec;
}
