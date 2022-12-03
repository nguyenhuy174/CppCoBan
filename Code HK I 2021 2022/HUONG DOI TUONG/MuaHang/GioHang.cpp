#include "GioHang.h"
#include "SanPham.h"
#include <iostream>

GioHang::GioHang()
{
	this->soMatHang = 0;
}

int GioHang::tim(int ma)
{
	for (auto i = 0; i < this->soMatHang; i++)
		if (ma == this->ds[i].getMa()) return i;
	return -1;
}

void GioHang::hienThi()
{
	if (this->soMatHang == 0)
	{
		cout << "Gio hang rong!" << endl;
		return;
	}
	for (auto i = 0; i < this->soMatHang; i++)
	{
		ds[i].hienthi();
	}
}

void GioHang::them(SanPham sp, int soLuong)
{
	if (this->soMatHang >= SOMH) return; // Lon hon so san pham toi da
	auto kq = this->tim(sp.getMa());
	if (kq == -1)
	{
		sp.setSoLuong(soLuong);
		this->ds[soMatHang] = sp;
		this->soMatHang++;
	}
	else
	{
		(this->ds[kq]).setSoLuong(soLuong + (this->ds[kq]).getSoLuong());
	}
}

void GioHang::xoaSP(int ma)
{
	int kq = tim(ma);
	if (kq == -1) return;
	for (int i = kq; i < soMatHang; i++)
	{
		ds[i] = ds[i + 1];
		this->soMatHang--;
	}
}

void GioHang::xoa()
{
	this->soMatHang = 0;
}

float GioHang::tongTien()
{
	float s = 0.0;
	for (auto i = 0; i < this->soMatHang; i++)
	{
		s = s + ds[i].getGia() * ds[i].getSoLuong();
	}
	return s;

}
