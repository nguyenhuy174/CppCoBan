#include "Quanly.h"
#include"Giangvien.h"
#include"Nhanvien.h"
#include"Trogiang.h"

Quanly::Quanly(void)
{
	n = 0;
	x = new Nguoi * [1000];
}

Quanly::~Quanly(void)
{
	delete[]x;
}

void Quanly::nhap()
{
	cout << "\n\t\t1-Nhap thong tin 1 nhan vien \n\t\t2-Nhap thong tin 1 giang vien \n\t\t3-Nhap thong tin 1 tro giang \n\t\t0-Hien thi ket qua\n";
	int k;
	for (int i = 0;; i++)
	{
		do {
			cout << "\nNhap lua chon cua ban: ";
			cin >> k;
			if (k != 1 && k != 2 && k != 3 && k != 0) cout << "\nkhong hop le!\n";
		} while (k != 1 && k != 2 && k != 0 && k != 3);
		if (k == 0)
		{
			system("cls");
			return;
		}
		if (k == 1)
		{
			n++;
			x[i] = new Nhanvien;
		}
		if (k == 2)
		{
			n++;
			x[i] = new Giangvien;
		}
		if (k == 3)
		{
			n++;
			x[i] = new Trogiang;
		}
		x[i]->nhap();
	}
}

void Quanly::xuat()
{
	cout << "So nhan vien = " << n << "\n";
	for (int i = 0; i < n; i++)
	{
		cout << endl;
		x[i]->xuat();
		cout << "Luong = " << x[i]->luong();
		cout << endl;
	}
}