#include<iostream>
#include"Hinh_CN.h"
#include"Hinh_Tron.h"
#include"Tam_Giac.h"
#include"PT_Bac1.h"
#include"PT_Bac2.h"
#include"PhanSo.h"
#include"Sophuc.h"

void baitap_tuan04()
{/*
	//Bai 8:Hoan thien class Tron bang cach bo sung method tinh dien tich (dua tren hang M_PI)
	cout << "Hinh Tron:";
	Hinh_Tron b(20);
	cout << "\nChu Vi : " << b.chuvi();
	cout << "\nDien tich : " << b.dientich();
	//Bai 9:Xay dung class ChuNhat.
	cout << "\n\nHinh Chu Nhat:";
	Hinh_CN a(10, 20);
	cout << "\nchu vi : " << a.chuvi();
	cout << "\ndien tich : " << a.dientich();
	//Bai 10:Xay dung class Tam giac (voi 3 canh la so thuc)
	cout << "\n\nHinh Tam Giac:";
	Tam_Giac c(4.5, 2.5, 3.5);
	if (c.Hople() == true)
	{
		cout << "\nLa Tam Giac";
		cout << "\nChu vi : " << c.chuvi();
		cout << "\nDien tich : " << c.dientich();
	}
	else
		cout << "\nKhong phai Tam giac";
	//Bai 11:Xay dung class Giai phuong trinh ax+b = 0
	cout << "\n\nGiai PT Bac 1:";
	PT_Bac1 d(12, 4);
	cout << "\nnghiem x = " << d.nghiem();
	//Bai 12:Xay dung class Giai ax^2 + bx + c = 0
	cout << "\n\nGiai PT Bac 2:\n";
	PT_Bac2 e(2, 4, 1);
	e.nghiem();
	//Bai 13:Xay dung class PhanSo
	cout << "\n\nPhan So Da Nhap La : ";
	PhanSo f(3, 2), g(3);
	cout << "\nCong 2 Phan So : ";
	f.cong(f, g);
	cout << "\nTru 2 Phan So : ";
	g.tru(f, g);
	cout << "\nNhan 2 Phan So : ";
	f.nhan(f, g);
	cout << "\nChia 2 Phan So : ";
	f.chia(f, g);
*/
}

using namespace std;
int main()
{
	Sophuc p,q,r,m;
	cin >> p>>q;
	cout << "\nSo Phuc Da Nhap La:\n";
	cout << p << q;
	r = p + q;
	cout << "tong 2 so phuc la :  ";
	r.hienthi();

	r = p - q;
	cout << "\nhieu 2 so phuc la :  ";
	r.hienthi();

	cout << "\nhieu 2 so phuc la :  ";
	r = p * q;
	cout << "\ttich 2 so phuc la :  ";
	r.hienthi();

	r = p / q;
	cout << "\tthuong 2 so phuc la :  ";
	r.hienthi();

	cout << "\n\n";
	system("pause");
	return 0;
}


