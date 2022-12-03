#pragma once
#include "SanPham.h"
#define SOMH 100

class GioHang
{
private:
	SanPham ds[SOMH];
	int soMatHang;
	int tim(int ma);
public:
	GioHang();
	void hienThi();
	void them(SanPham sp, int soLuong);
	void xoaSP(int ma);
	void xoa();
	float tongTien();
};