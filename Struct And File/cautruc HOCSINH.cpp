#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

/*B�i tap 3:
Cho cau tr�c HOCSINH gom
M�: 10 k� tu (C�c m� kh�ng tr�ng nhau)
Ho t�n: 30 k� tu
Nam sinh: 12 k� tu
�iem to�n, l�, h�a, tong: so thuc (c� 2 chu so thap ph�n)
Tong = to�n + l� + h�a
a.	Khai b�o cau tr�c HOCSINH
b.	Nhap danh s�ch
c.	Xuat danh s�ch
d.	T�m 1 hoc sinh theo m�
e.	Sap xap danh s�ch tang dan theo diem tong
f.	X�a mot hoc sinh
g.	Th�m mot hoc sinh
h.	Sua th�ng tin mot hoc sinh
*/
struct Hocsinh
{
	char ma[10]; //r�ng xu ly sao cho tu 01a Bh ---> 01ABH
	char hoten[30];
	char namsinh[12];
	float t, l, h, tong;
};
int timkiem(Hocsinh a[], int n, char ma1[])
{
	for (int i = 0; i < n; i++)
	{
		if (strcmp(a[i].ma, ma1) == 0)
			return i; //m� tr�ng
	}
	return -1; // m� kh�ng tr�ng
}
void tieude1()
{
	cout << setw(8) << left << "MaHS" << setw(30) << left << "HO TEN" << setw(12) << right << "NGAY SINH"
		 << setw(13) << right << "DIEM TOAN" << setw(13) << right << "DIEM LY" << setw(13) << right << "DIEM HOA"
		 << setw(13) << right << "TONG DIEM" << endl;
}

void xuat1hs(Hocsinh &hs1)
{
	cout << fixed;
	cout << setprecision(2); //xuat ra diem voi 2 so thap phan sau dua phay
	cout << setw(8) << left << hs1.ma << setw(30) << left << hs1.hoten << setw(12) << right << hs1.namsinh
		 << setw(13) << right << hs1.t << setw(13) << right << hs1.l << setw(13) << right << hs1.h
		 << setw(13) << right << hs1.tong << endl;
}

void hoanvi(Hocsinh &x, Hocsinh &y)
{
	Hocsinh t1;
	t1 = x;
	x = y;
	y = t1;
}

void sapxepdiemtongtangdan(Hocsinh a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i].tong > a[j].tong)
				hoanvi(a[i], a[j]);
		}
	}
}
void Nhap1hs(Hocsinh a[], int n, Hocsinh &hs1)
{
	char ma1[10];
	int f;
	do
	{
		cout << "Nhap ma: ";
		cin.getline(ma1, 10);
		f = timkiem(a, n, ma1);
		if (f != -1)
			cout << "Ma trung! Nhap lai" << endl;
	} while (f != -1);
	strcpy(hs1.ma, ma1);

	cout << "Nhap ho ten: ";
	cin.getline(hs1.hoten, 30);
	cout << "Nhap ngay thang nam sinh: ";
	cin.getline(hs1.namsinh, 12);
	cout << "Nhap diem Toan: ";
	cin >> hs1.t;
	cout << "Nhap diem Ly: ";
	cin >> hs1.l;
	cout << "Nhap diem Hoa: ";
	cin >> hs1.h;
	hs1.tong = hs1.t + hs1.l + hs1.h;
	cin.ignore();
}
void Nhapds(Hocsinh a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "------Nhap thong tin cho hoc sinh thu #" << i + 1 << " -------\n";
		Nhap1hs(a, n, a[i]);
	}
}

void Xuatds(Hocsinh a[], int n)
{
	tieude1();
	for (int i = 0; i < n; i++)
	{
		xuat1hs(a[i]);
	}
}
void tim1hs(Hocsinh a[], int n, char ma1[])
{
	cout << "Nhap ma hoc sinh can tim: ";
	cin.getline(ma1, 10);
	int vt = timkiem(a, n, ma1);
	if (vt != -1)
	{
		cout << "HOC SINH CAN TIM LA:" << endl;
		tieude1();
		xuat1hs(a[vt]);
	}
	else
	{
		cout << "Khong tim thay hoc sinh nao tu ma vua nhap!" << endl;
	}
}
void xoahs(Hocsinh a[], int &n)
{
	char mat[10];
	cout << "Nhap ma can xoa : ";
	cin.getline(mat, 10);
	int vt = timkiem(a, n, mat);
	if (vt == -1)
		cout << "Khong co ma nhan vien nay: " << endl;
	else
		for (int i = vt; i < n  ; i++)
		{
			a[i] = a[i + 1];
			n--;
		}
}
int main()
{
	Hocsinh a[10];
	int n = 3;
	char ma1[10];
	Nhapds(a, n);
	Xuatds(a, n);
	/*sapxepdiemtongtangdan(a,n);
    cout << "------DIEM TONG SAU KHI SAP SEP LA------";
    Xuatds(a,n);
	*/
	tim1hs(a, n, ma1);
	xoahs(a,n);
	Xuatds(a,n);
	system("pause");
	return 0;
}
