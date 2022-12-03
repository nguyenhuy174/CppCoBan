#include "Hinhchunhat.h"

Hinhchunhat::Hinhchunhat(float d, float r)
{
	this->cDai = d;
	this->cRong = r;
}

float Hinhchunhat::chuVihcn()
{
	return (cDai + cRong) * 2;
}

float Hinhchunhat::dienTichhcn()
{
	return cDai * cRong;
}
