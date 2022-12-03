#include "nhanvien.h"


nhanvien::nhanvien(void)
{
}


nhanvien::~nhanvien(void)
{
}
void nhanvien::nhap()
{
	nguoi::nhap();
	cout << "so ngay lam viec: "; cin >> ngaycong;
}
void nhanvien::xuat()
{
	nguoi::xuat();
	cout << "so ngay lam viec:" << ngaycong << endl;
}
long nhanvien::luong()
{
	return ngaycong * 300000;
}