#pragma once
#include <string>

using namespace std;
class SanPham
{
private:
	int ma;
	string ten;
	float gia;
	int soLuong;
public:
	SanPham();
	SanPham(int m, string t, float g);
	SanPham(int m, string t, float g, int soLuong);
	void hienthi();
	int getMa();
	float getGia();
	void setSoLuong(int soLuong);
	int getSoLuong();
};