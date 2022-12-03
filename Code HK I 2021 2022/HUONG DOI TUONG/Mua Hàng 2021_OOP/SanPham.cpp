#include <iostream>
#include <string>
#include "SanPham.h"

using namespace std;

SanPham::SanPham()
{
	this->ma = 0;
	this->gia = 0;
	this->soLuong = 0;
}

SanPham::SanPham(int m, string t, float g)
{
	this->ma = m;
	this->ten = t;
	this->gia = g;
}

SanPham::SanPham(int m, string t, float g, int soLuong)
{
	this->ma = m;
	this->ten = t;
	this->gia = g;
	this->soLuong = soLuong;
}

void SanPham::hienthi()
{
	cout << this->ma << ", " << this->ten << ", " << this->gia << ", "<< this->soLuong<< endl;
}

int SanPham::getMa()
{
	return this-> ma;
}

float SanPham::getGia()
{
	return this->gia;
}

int SanPham::getSL()
{
	return this->soLuong;
}

void SanPham::setSL(int soLuong)
{
	this->soLuong = soLuong;
}

