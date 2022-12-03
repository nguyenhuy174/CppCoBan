#include "PhanSo.h"
#include <iostream>
using namespace std;

PhanSo::PhanSo()
{
	this->tu = 0;
	this->mau = 1;
}

PhanSo::PhanSo(int t)
{
	this->tu = t;
	this->mau = 1;
	cout << "\t" << tu;
}

PhanSo::PhanSo(int t, int m)
{
	this->tu = t;
	this->mau = m;
	rutGon(tu, mau);
	if (mau < 0 && tu > 0)
	{
		cout << "\t" << -tu << "/" << -mau;
	}
	else if (mau < 0 && tu < 0)
	{
		cout << "\t" << -tu << "/" << -mau;
	}
	else
	{
		cout << "\t" << tu << "/" << mau;
	}
}

int PhanSo::rutGon(int& a, int& b)
{
	int x = abs(a);
	int y = abs(b);
	while (x != y) {
		if (x > y)
			x = x - y;
		else
			y = y - x;
	}
	a = a / x;
	b = b / x;
	return a, b;
}

void PhanSo::cong(PhanSo& a, PhanSo& b)
{
	PhanSo tong;
	tong.tu = a.tu * b.mau + b.tu * a.mau;
	tong.mau = a.mau * b.mau;
	if (tong.tu == 0 || tong.tu == tong.mau)
	{
		cout << "\t" << tong.tu / tong.mau;
	}
	else
	{
		rutGon(tong.tu, tong.mau);
		PhanSo(tong.tu, tong.mau);
	}
}

void PhanSo::tru(PhanSo& a, PhanSo& b)
{
	PhanSo hieu;
	hieu.tu = (a.tu * b.mau) - (b.tu * a.mau);
	hieu.mau = a.mau * b.mau;
	if (hieu.tu == 0 || hieu.tu == hieu.mau)
	{
		cout << "\t" << hieu.tu / hieu.mau;
	}
	else
	{
		rutGon(hieu.tu, hieu.mau);
		PhanSo(hieu.tu, hieu.mau);
	}
}

void PhanSo::nhan(PhanSo& a, PhanSo& b)
{
	PhanSo tich;
	tich.tu = a.tu * b.tu;
	tich.mau = a.mau * b.mau;
	if (tich.tu == 0 || tich.tu == tich.mau)
	{
		cout << "\t" << tich.tu / tich.mau;
	}
	else
	{
		rutGon(tich.tu, tich.mau);
		PhanSo(tich.tu, tich.mau);
	}
}

void PhanSo::chia(PhanSo& a, PhanSo& b)
{
	PhanSo thuong;
	thuong.tu = a.tu * b.mau;
	thuong.mau = a.mau * b.tu;
	if (thuong.tu == 0 || thuong.tu == thuong.mau)
	{
		cout << "\t" << thuong.tu / thuong.mau;
	}
	else
	{
		rutGon(thuong.tu, thuong.mau);
		PhanSo(thuong.tu, thuong.mau);
	}
}




















