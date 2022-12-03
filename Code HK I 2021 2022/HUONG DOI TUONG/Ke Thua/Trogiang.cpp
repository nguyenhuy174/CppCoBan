#include "Trogiang.h"
#include<iostream>

using namespace std;
Trogiang::Trogiang()
{
	this->LuongGio = 0;
	this->SoGioLam = 0;
}

void Trogiang::update()
{
	Nguoi::update();
	cout << "Nhap Luong/Gio: ";
	cin >> this->LuongGio;
	cout << "Nhap So gio Lam: ";
	cin >> this->SoGioLam;
}

void Trogiang::input()
{
	Nguoi::input();
	cout << "Nhap Luong/Gio: ";
	cin >> this->LuongGio;
	cout << "Nhap So gio Lam: ";
	cin >> this->SoGioLam;
}

void Trogiang::output()
{
	Nguoi::output();
	cout << "Luong: " << TinhLuong();

}

int Trogiang::TinhLuong()
{
	return this->LuongGio * this->SoGioLam;
}