#include "Giangvien.h"
#include "Nguoi.h"
#include<iostream>

using namespace std;


Giangvien::Giangvien()
{
	this->heso = 0;
	this->luongcb = 0;
}

void Giangvien::input()
{
	//Nguoi::input();
	cout << "Nhap he so luong: ";
	cin >> this->heso;
	cout << "Nhap luong co ban: ";
	cin >> this->luongcb;
}

void Giangvien::update()
{
	//Nguoi::update();
	cout << "Nhap he so luong: ";
	cin >> this->heso;
	cout << "Nhap luong co ban: ";
	cin >> this->luongcb;
}

void Giangvien::display()
{
	//Nguoi::display();
	cout << "Salary: " << this->countSalary();
}

int Giangvien::countSalary()
{
	return this->luongcb * this->heso;
}
