#include "PhuongTrinhBacNhat.h"
#include <iostream>
using namespace std;

void PhuongTrinhBacNhat::Nhap()
{
	cout << "\nNhap he so a va b cho he phuong trinh bac nhat ax + b" << endl;
	cout << "a: "; cin >> this->a;
	cout << "b: "; cin >> this->b;
}

float PhuongTrinhBacNhat::ketQua()
{
	return (float)(-(b) / a);
}

bool PhuongTrinhBacNhat::hopLe()
{
	if(a == 0)
		return false;
	return true;
}
