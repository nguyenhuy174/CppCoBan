#include "Giangvien.h"
#include<iostream>

using namespace std;


Giangvien::Giangvien()
{
	this->Heso = 0;
	this->Luongcoban = 0;
}

void Giangvien::input()
{
	Nguoi::input();
	cout << "Nhap He So: ";
	cin >> this->Heso;
	cout << "Nhap Luong Co Ban: ";
	cin >> this->Luongcoban;
}

void Giangvien::update()
{
	Nguoi::update();
	cout << "Nhap He So: ";
	cin >> this->Heso;
	cout << "Nhap Luong Co Ban: ";
	cin >> this->Luongcoban;
}

void Giangvien::output()
{
	Nguoi::output();
	cout << "Luong: " << this->Tinhluong();
}

int Giangvien::Tinhluong()
{
	return this->Luongcoban * this->Heso;
}