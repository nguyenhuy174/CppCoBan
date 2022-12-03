#include "Giangvien.h"


Giangvien::Giangvien(void)
{

}


Giangvien::~Giangvien(void)
{

}
void Giangvien::nhap()
{
	Nguoi::nhap();
	cout << "luong co ban: "; cin >> luongcoban;
	cout << "he so: "; cin >> heso;
}
void Giangvien::xuat()
{
	Nguoi::xuat();
	cout << "luong co ban: " << luongcoban << endl << "he so: " << heso << endl;
}
long Giangvien::luong()
{
	return luongcoban * heso;
}