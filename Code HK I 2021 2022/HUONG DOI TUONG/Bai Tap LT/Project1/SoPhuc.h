#pragma once
class SoPhuc
{
private:
	float thuc;
	float ao;
public:
    void Nhap();
    void Xuat();
    void cong(SoPhuc sp1, SoPhuc sp2);
    void tru(SoPhuc sp1, SoPhuc sp2);
    void nhan(SoPhuc sp1, SoPhuc sp2);
    void chia(SoPhuc sp1, SoPhuc sp2);
};

