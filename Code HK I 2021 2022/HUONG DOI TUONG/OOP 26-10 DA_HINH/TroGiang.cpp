#include "TroGiang.h"
#include <iostream>
using namespace std;

TroGiang::TroGiang(int ma, string ten, float luong, float diem):
	NhanSu(ma,ten),
	GiangVien(111,ten,luong), SinhVien(222,ten,diem)
{
}

void TroGiang::hienThi()
{
	cout << "SinhVien::ma = " << this->SinhVien::ma << ", GiangVien::ma = " << GiangVien::ma << endl;
	cout << this->ma;
}

void TroGiang::lamViec()
{
	cout << "luc thi lam viec, luc thi giang day";
}
