#include "Tamgiac.h"
#include <cmath>
#include <iostream>
Tamgiac::Tamgiac(float a, float b, float c)
{
	this->c1 = a;
	this->c2 = b;
	this->c3 = c;
}
bool Tamgiac::hople()
{
	if ((c1 + c2) > c3 && (c1 + c3) > c2 && (c2 + c3) > c1)
		return true;
	return false;
}
float Tamgiac::chuVi()
{
	return c1 + c2 + c3;
}

float Tamgiac::dienTich()
{
	float p = (float)(this->chuVi() / 2);
	return sqrt(p * (p - c1) * (p - c2) * (p - c3));
}


