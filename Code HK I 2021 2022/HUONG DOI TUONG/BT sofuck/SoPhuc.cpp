#include<iostream>
#include "SoPhuc.h"

using namespace std;

SoPhuc::SoPhuc()
{
	thuc = 0;
	ao = 0;
}

SoPhuc::SoPhuc(float thuc)
{
	this->thuc = thuc;
	ao = 0;
}

SoPhuc::SoPhuc(float thuc, float ao)
{
	this->thuc = thuc;
	this->ao = ao;
}

void SoPhuc::HienThi()
{
	if (this->ao <= 0) 
		cout <<"Ket Qua: "<< this->thuc << this->ao << "*i" <<endl;
	else 
		cout << "Ket Qua: " << this->thuc << "+" << this->ao << "*i" << endl;
}

SoPhuc& operator+(SoPhuc& s1, SoPhuc& s2)
{
	return *(new SoPhuc(s1.thuc + s2.thuc, s1.ao + s2.ao));
}

SoPhuc& operator+(SoPhuc& s1, float a)
{
	return s1 + *(new SoPhuc(a));
}

SoPhuc& operator+(float a, SoPhuc& s2)
{
	return *(new SoPhuc(a)) + s2;
}


SoPhuc& operator-(SoPhuc& s1, SoPhuc& s2)
{
	return *(new SoPhuc(s1.thuc - s2.thuc, s1.ao - s2.ao));
}

SoPhuc& operator-(SoPhuc& s1, float a)
{
	return s1 - *(new SoPhuc(a));
}

SoPhuc& operator-(float a, SoPhuc& s2)
{
	return s2 - *(new SoPhuc(a));
}

SoPhuc& operator*(SoPhuc& s1, SoPhuc& s2)
{
	return *(new SoPhuc(s1.thuc * s2.thuc - s1.ao * s2.ao, s1.thuc * s2.ao + s1.ao * s2.thuc));
}

SoPhuc& operator*(SoPhuc& s1, float a)
{
	return *(new SoPhuc(s1.thuc * a, s1.ao * a));
}

SoPhuc& operator*(float a, SoPhuc& s2)
{
	return *(new SoPhuc(a * s2.thuc, a * s2.ao));

}



SoPhuc& operator/(SoPhuc& s1, SoPhuc& s2)
{
	return *(new SoPhuc((s1.thuc * s2.thuc + s1.ao * s2.ao) / (s2.thuc * s2.thuc + s2.ao * s2.ao), (s2.thuc * s1.ao - s2.ao * s1.thuc) / (s2.thuc * s2.thuc + s2.ao * s2.ao)));
}

SoPhuc& operator/(SoPhuc& s1, float a)
{
	return *(new SoPhuc((s1.thuc * a) / (a * a), (a * s1.ao) / (a * a)));

}

SoPhuc& operator/(float a, SoPhuc& s2)
{
	return *(new SoPhuc((a * s2.thuc) / (s2.thuc * s2.thuc + s2.ao * s2.ao), (s2.ao * a) / (s2.thuc * s2.thuc + s2.ao * s2.ao)));

}


