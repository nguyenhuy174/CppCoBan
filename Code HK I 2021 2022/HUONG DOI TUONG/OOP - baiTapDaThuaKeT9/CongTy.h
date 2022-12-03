#pragma once
#include <iostream>
#include <vector>
#include "NhanVien.h"
#include "NhanVienVanPhong.h"
#include "NhanVienSanXuat.h"
#include "ThucTap.h"

using namespace std;

class CongTy
{
protected:
	vector <NhanVien*> NVVP;
	vector <NhanVien*> NVSX;
	vector <NhanVien*> NVTT;
public:
	CongTy();
	~CongTy();
	void nhapNVVP();
	void nhapNVSX();
	void nhapNVTT();
	void hienThiDS();
};

