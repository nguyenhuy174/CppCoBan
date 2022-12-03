#pragma once
#include <iostream>
using namespace std;
class soPhuc
{
private:
	float thuc, ao;
public:
	soPhuc();
	soPhuc(float, float);
	soPhuc(float);
	void hienthi();
	friend istream& operator >> (istream&, soPhuc&);
	friend ostream& operator << (ostream&, soPhuc&);

	friend soPhuc& operator+(soPhuc&, soPhuc&);
	friend soPhuc& operator+(soPhuc&, float);
	friend soPhuc& operator+(float, soPhuc&);

	friend soPhuc& operator-(soPhuc&, float);
	friend soPhuc& operator-(float, soPhuc&);
	friend soPhuc& operator-(soPhuc&, soPhuc&);

	friend soPhuc& operator*(soPhuc&, float);
	friend soPhuc& operator*(float, soPhuc&);
	friend soPhuc& operator*(soPhuc&, soPhuc&);

	friend soPhuc& operator/(soPhuc&, soPhuc&);
	friend soPhuc& operator/(soPhuc&, float);
	friend soPhuc& operator/(float, soPhuc&);

};


