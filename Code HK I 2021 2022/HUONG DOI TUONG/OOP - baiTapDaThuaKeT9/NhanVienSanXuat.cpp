#include <iostream>
#include "NhanVienSanXuat.h"

using namespace std;

void NhanVienSanXuat::nhap()
{
	cout << "------------Nhap thong tin Nhan Vien San Xuat--------------\n";
	NhanVien::nhap();
	cout << "Nhap so luong san pham: "; cin >> this->soSanPham;
	cout << "Nhap tien cong 1 san pham: "; cin >> this->tienCong1SP;
}

void NhanVienSanXuat::xuat()
{
	cout << this->hoten << "\t" << tinhLuong();

}

float NhanVienSanXuat::tinhLuong()
{
	return this->soSanPham * this->tienCong1SP;
}
