#include "quanly.h"
#include"giangvien.h"
#include"nhanvien.h"
#include"trogiang.h"
quanly::quanly(void)
{
	n = 0;
	x = new nguoi * [1000];
}


quanly::~quanly(void)
{
	delete[]x;
}
void quanly::nhap()
{
	cout << "Huong dan-------------\n";
	cout << "\n1-nhap thong tin 1 nhan vien \n2-nhap thong tin 1 giang vien \n3-nhap thong tin 1 tro giang \n0-ket thuc\n";
	int k;
	for (int i = 0;; i++)
	{
		do {
			cout << "\nNhap lenh tu ban phim :";
			cin >> k;
			if (k != 1 && k != 2 && k!=3 && k!= 0) cout << "\nkhong hop le!\n";
		} while (k != 1 && k != 2 && k != 0 && k!=3);
		if (k == 0) return;
		if (k == 1)
		{
			n++;
			x[i] = new nhanvien;
		};
		if (k == 2)
		{
			n++;
			x[i] = new giangvien;
		};
		if (k == 3)
		{
			n++;
			x[i] = new trogiang;
		}
		x[i]->nhap();
	}
}
void quanly::xuat()
{
	cout << "so nhan vien = " << n << "\n";
	for (int i = 0; i < n; i++)
	{
		cout << endl;
		x[i]->xuat();
		cout << "luong = " << x[i]->luong();
		cout << endl;
	}
}