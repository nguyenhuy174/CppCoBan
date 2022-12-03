#include "Nhanvien.h"


Nhanvien::Nhanvien(void)
{

}

Nhanvien::~Nhanvien(void)
{

}

void Nhanvien::nhap()
{
	Nguoi::nhap();
	cout << "So ngay lam viec: "; cin >> ngaycong;
}

void Nhanvien::xuat()
{
	Nguoi::xuat();
	cout << "So ngay lam viec: " << ngaycong << endl;
}

long Nhanvien::luong()
{
	return ngaycong * 300000;
}