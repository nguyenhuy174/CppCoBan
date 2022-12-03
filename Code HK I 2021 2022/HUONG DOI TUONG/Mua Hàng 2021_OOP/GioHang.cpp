#include "GioHang.h"
#include "SanPham.h"
#include <iostream>

GioHang::GioHang()
{
	this->soMatHang = 0;
}

int GioHang::TimSP(int ma)
{
	for (auto i = 0; i < this->soMatHang; i++)
		if (ma == this->ds[i].getMa()) return i;
	return -1;
}

void GioHang::hienThiSP()
{
	
	for (auto i = 0; i < this->soMatHang; i++)
	{
		ds[i].hienthi();
	}
}

void GioHang::themSP(SanPham sp, int soLuong)
{
	if (this->soMatHang >= SOMH) return; // Lon hon so san pham toi da
	auto kq = this->TimSP(sp.getMa());
	if (kq == -1)
	{
		sp.setSL(soLuong);
		this->ds[soMatHang] = sp;
		this->soMatHang++;
	}
	else
	{
		(this->ds[kq]).setSL(soLuong + (this->ds[kq]).getSL());
	}
}

void GioHang::xoaSP(int ma)
{
	int kq = TimSP(ma);
	if (kq == -1) return;
	for (int i = kq; i < soMatHang; i++)
	{
		ds[i] = ds[i + 1];
		this->soMatHang--;
	}
}

void GioHang::clearSP()
{
	this->soMatHang = 0;
}

float GioHang::tongTienSP()
{
	float s = 0.0;
	for (auto i = 0; i < this->soMatHang; i++)
	{
		s = s + ds[i].getGia() * ds[i].getSL();
	}
	return s;

}







