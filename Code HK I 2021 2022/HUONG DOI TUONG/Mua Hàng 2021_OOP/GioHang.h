#pragma once
#include "SanPham.h"
#define SOMH 100

class GioHang
{
private:
	SanPham ds[SOMH];
	int soMatHang;
	int TimSP(int ma);
public:
	GioHang();
	void hienThiSP();
	void themSP(SanPham sp, int soLuong);
	void xoaSP(int ma);
	void clearSP();
	float tongTienSP();
};