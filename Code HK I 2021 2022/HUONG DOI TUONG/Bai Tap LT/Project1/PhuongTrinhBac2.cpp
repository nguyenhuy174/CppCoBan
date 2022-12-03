#include "PhuongTrinhBac2.h"
#include <cmath>
PhuongTrinhBac2::PhuongTrinhBac2(float a1, float b1, float c1)
{
	this->a = a1;
	this->b = b1;
	this->c = c1;
}

float PhuongTrinhBac2::delta()
{
	return b * b - 4 * a * c;
}

float PhuongTrinhBac2::nghiemKep()
{
	return -b / (2 * a);
}

float PhuongTrinhBac2::nghiem1()
{
	return (-b + sqrt(this->delta())) / 2;
}

float PhuongTrinhBac2::nghiem2()
{
	return (-b - sqrt(this->delta())) / 2;
}
