#include "Sophuc.h"
#include<iostream>
#include<cmath>
using namespace std;
Sophuc::Sophuc()
{
	this->thuc = 0;
	this->ao = 0;
}

Sophuc::Sophuc(float t, float a)
{
	this->thuc = t;
	this->ao = a;
}

Sophuc::Sophuc(float t)
{
	this->thuc = t;
	this->ao = 0;
}



void Sophuc::hienthi()
{
	if (ao >= 0)
		cout << thuc << " + " << ao << "i";
	else
		cout << thuc << ao << "i";
}

istream& operator >> (istream &in, Sophuc &q)
{
	cout << "Nhap phan thuc: ";
	in >> q.thuc;
	cout << "Nhap phan ao: ";
	in >> q.ao;
	return in;
}

ostream& operator<<(ostream& out, Sophuc& q)
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

Sophuc& operator+(Sophuc& p, Sophuc& q)
{
	return *(new Sophuc(p.thuc + q.thuc, p.ao + q.ao));
}

Sophuc& operator+(Sophuc& p, float a)
{
	return *(new Sophuc(a + p.thuc,p.ao));
}

Sophuc& operator+(float a, Sophuc& p)
{
	return *(new Sophuc(a + p.thuc, p.ao));
}

Sophuc& operator-(Sophuc& p, Sophuc& q)
{
	return *(new Sophuc(p.thuc - q.thuc, p.ao - q.ao));
}

Sophuc& operator-(Sophuc& p, float a)
{
	return *(new Sophuc(p.thuc - a, p.ao));
}

Sophuc& operator-(float a, Sophuc& p)
{
	return *(new Sophuc(a - p.thuc, -p.ao));
}

Sophuc& operator*(Sophuc& p, Sophuc& q)
{
	return *(new Sophuc((p.thuc * q.thuc) - (p.ao * q.ao), (p.thuc * q.ao) + (p.ao * q.thuc)));
}

Sophuc& operator*(Sophuc& p, float a)
{
	return *(new Sophuc(a * p.thuc, a * p.ao));
}

Sophuc& operator*(float a, Sophuc& p)
{
	return *(new Sophuc(a * p.thuc, a * p.ao));
}

Sophuc& operator/(Sophuc& a, Sophuc& b)
{
	auto thuc = (b.thuc * a.thuc + b.ao * a.ao) / (pow(b.thuc, 2) + pow(b.ao, 2));
	auto ao = (b.thuc * a.ao - b.ao * a.thuc) / (pow(b.thuc, 2) + pow(b.ao, 2));
	return *(new Sophuc(thuc,ao));
}

Sophuc& operator/(Sophuc& p, float a)
{
	return *(new Sophuc((float)p.thuc / a, (float)p.ao / a));
}

Sophuc& operator/(float a, Sophuc& p)
{
	return *(new Sophuc((p.thuc * a) / (pow(p.thuc, 2) + pow(p.ao, 2)), (p.ao * a) / (pow(p.thuc, 2) + pow(p.ao, 2))));
}




