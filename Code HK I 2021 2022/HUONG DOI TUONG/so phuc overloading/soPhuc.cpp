#include "soPhuc.h"
#include<iostream>
#include<cmath>
using namespace std;
soPhuc::soPhuc()
{
	this->thuc = 0;
	this->ao = 0;
}

soPhuc::soPhuc(float t, float a)
{
	this->thuc = t;
	this->ao = a;
}

soPhuc::soPhuc(float t)
{
	this->thuc = t;
	this->ao = 0;
}



void soPhuc::hienthi()
{
	if (ao >= 0)
		cout << thuc << " + " << ao << "i";
	else
		cout << thuc << ao << "i";
}

istream& operator >> (istream& in, soPhuc& q)
{
	cout << "Nhap phan thuc: ";
	in >> q.thuc;
	cout << "Nhap phan ao: ";
	in >> q.ao;
	return in;
}

ostream& operator<<(ostream& out, soPhuc& q)
{
	if (q.ao >= 0)
	{
		out << q.thuc << " + " << q.ao << "i" << endl;
		return out;
	}
	else
	{
		out << q.thuc << q.ao << "i" << endl;
		return out;
	}
}

soPhuc& operator+(soPhuc& p, soPhuc& q)
{
	return *(new soPhuc(p.thuc + q.thuc, p.ao + q.ao));
}

soPhuc& operator+(soPhuc& p, float a)
{
	return *(new soPhuc(a + p.thuc, p.ao));
}

soPhuc& operator+(float a, soPhuc& p)
{
	return *(new soPhuc(a + p.thuc, p.ao));
}

soPhuc& operator-(soPhuc& p, soPhuc& q)
{
	return *(new soPhuc(p.thuc - q.thuc, p.ao - q.ao));
}

soPhuc& operator-(soPhuc& p, float a)
{
	return *(new soPhuc(p.thuc - a, p.ao));
}

soPhuc& operator-(float a, soPhuc& p)
{
	return *(new soPhuc(a - p.thuc, -p.ao));
}

soPhuc& operator*(soPhuc& p, soPhuc& q)
{
	return *(new soPhuc((p.thuc * q.thuc) - (p.ao * q.ao), (p.thuc * q.ao) + (p.ao * q.thuc)));
}

soPhuc& operator*(soPhuc& p, float a)
{
	return *(new soPhuc(a * p.thuc, a * p.ao));
}

soPhuc& operator*(float a, soPhuc& p)
{
	return *(new soPhuc(a * p.thuc, a * p.ao));
}

soPhuc& operator/(soPhuc& a, soPhuc& b)
{
	auto thuc = (b.thuc * a.thuc + b.ao * a.ao) / (pow(b.thuc, 2) + pow(b.ao, 2));
	auto ao = (b.thuc * a.ao - b.ao * a.thuc) / (pow(b.thuc, 2) + pow(b.ao, 2));
	return *(new soPhuc(thuc, ao));
}

soPhuc& operator/(soPhuc& p, float a)
{
	return *(new soPhuc((float)p.thuc / a, (float)p.ao / a));
}

soPhuc& operator/(float a, soPhuc& p)
{
	return *(new soPhuc((p.thuc * a) / (pow(p.thuc, 2) + pow(p.ao, 2)), (p.ao * a) / (pow(p.thuc, 2) + pow(p.ao, 2))));
}




