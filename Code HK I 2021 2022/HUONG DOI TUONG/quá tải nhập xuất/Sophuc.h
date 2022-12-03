#pragma once
#include<iostream>
using namespace std;
class Sophuc
{
private:
	float thuc, ao;
public:
	Sophuc();
	Sophuc(float, float);
	Sophuc(float);
	void hienthi();
	friend istream& operator >> (istream &, Sophuc &);
	friend ostream& operator << (ostream&, Sophuc&);
	friend Sophuc& operator+(Sophuc&, Sophuc&);
	friend Sophuc& operator-(Sophuc&, Sophuc&);
	friend Sophuc& operator*(Sophuc&, Sophuc&);
	friend Sophuc& operator/(Sophuc&, Sophuc&);

};

