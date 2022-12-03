#include "Nguoi.h"
#include<iostream>
#include<string>

using namespace std;

Nguoi::Nguoi()
{
	this->ma = ma;
	this->ten = "Empty";
	this->tuoi = 0;
	this->luong = 0;
}
Nguoi::Nguoi(string ma, string ten,int tuoi)
{
	this->ma = ma;
	this->ten = ten;
	this->tuoi = tuoi;
}

void Nguoi::setMa(string ma)
{
	this->ma = ma;
}

void Nguoi::setTen(string ten)
{
	this->ten = ten;
}

void Nguoi::setTuoi(int tuoi)
{
	this->tuoi = tuoi;
}

void Nguoi::setLuong(int luong)
{
	this->luong = luong;
}
void Nguoi::setChucvu(string chucvu)
{
	this->chucvu = chucvu;
}


string Nguoi::getMa()
{
	return this->ma;
}

string Nguoi::getTen()
{
	return this->ten;
}

int Nguoi::getTuoi()
{
	return this->tuoi = tuoi;
}


int Nguoi::getLuong()
{
	return this->luong;
}
string Nguoi::getChucvu()
{
	return this->chucvu;
}

void Nguoi::input()
{
	cout << "Nhap ma: ";
	getline(cin, this->ma);
	cout << "Nhap ten: ";
	getline(cin, this->ten);
	cout << "Nhap tuoi: ";
	cin >> this->tuoi;

}

void Nguoi::update()
{
	cout << "Nhap ten: ";
	getline(cin, this->ten);
	cout << "Nhap tuoi: ";
	cin >> this->tuoi;
}

void Nguoi::output()
{
	cout << "ma: " << this->ma << endl;
	cout << "ten: " << this->ten << endl;
	cout << "tuoi: " << this->tuoi << endl;
	cout << "luong: " << this->luong << endl;
	cout << "Chucvu: " << this->chucvu << endl;
}

int Nguoi::Tinhluong()
{
	return 0;
}