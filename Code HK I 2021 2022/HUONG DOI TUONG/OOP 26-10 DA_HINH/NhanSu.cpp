#include "NhanSu.h"
#include <iostream>
using namespace std;

NhanSu::NhanSu()
{
	cout << "chay constrcutor nay!";
}

NhanSu::NhanSu(int ma, string ten)
{
	this->ma = ma;
	this->ten = ten;
}

void NhanSu::hienThi()
{
	cout << this->ma << " , " << this->ten << endl;
}
