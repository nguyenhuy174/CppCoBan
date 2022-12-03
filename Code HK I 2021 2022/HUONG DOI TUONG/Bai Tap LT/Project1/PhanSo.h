//#pragma once
//class PhanSo
//{
//private:
//    int TuSo;
//    int MauSo;
//public:
//    void Nhap();
//    void Xuat();
//    void rutGon(PhanSo &ps);
//    void cong(PhanSo ps1, PhanSo ps2);
//    void tru(PhanSo ps1, PhanSo ps2);
//    void nhan(PhanSo ps1, PhanSo ps2);
//    void chia(PhanSo ps1, PhanSo ps2);
//};
#pragma once
class PhanSo
{
private:
	int tu, mau;
public:
	PhanSo();
	PhanSo(int);
	PhanSo(int, int);
	int rutGon(int&, int&);
	void cong(PhanSo& a, PhanSo& b);
	void tru(PhanSo& a, PhanSo& b);
	void nhan(PhanSo& a, PhanSo& b);
	void chia(PhanSo& a, PhanSo& b);
};


