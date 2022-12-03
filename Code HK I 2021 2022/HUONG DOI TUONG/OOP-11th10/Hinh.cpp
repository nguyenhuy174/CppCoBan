#include "Hinh.h"
#include<iostream>

Hinh::Hinh(string ten)
{
	this->ten = ten;
	std::cout << "day la constructor lop cha" << endl;
}

Hinh::Hinh()
{

}
Hinh::~Hinh()
{
	cout <<"day la destructor lop con"<< endl;
}
float Hinh::chuVi()
{
	return 123;
}

void Hinh::hienThi()
{
	std::cout << "day la hinh: " << this->ten << endl;
}






