#include "giangvien.h"


giangvien::giangvien(void)
{
}


giangvien::~giangvien(void)
{
}
void giangvien::nhap()
{
	nguoi::nhap();
	cout << "luong co ban:"; cin >> luongcoban;
	cout << "he so:"; cin >> heso;
}
void giangvien::xuat()
{
	nguoi::xuat();
	cout << "luong co ban:" << luongcoban << endl << "he so :" << heso << endl;
}
long giangvien::luong()
{
	return luongcoban * heso ;
}