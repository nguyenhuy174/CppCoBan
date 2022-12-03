#pragma once
#include <string>
class NhanSu
{
protected:
	int ma;
	string ten;
public:
	NhanSu();
	NhanSu(int ma, string ten);
	virtual void hienThi();
};

