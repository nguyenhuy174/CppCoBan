#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;

struct AIR
{
	char ma[5];
	char ten[30];
	char ngsinh[12];
	char gioitinh[4];
	char diachi[50];
	float luongcoban;
	float songaycong;
	float luongthuclinh; //luongthuclinh=luongcoban*so ngay cong

};

int TIMKIEM(NHANVIEN a[], int n, char mat[])
{
	for (int i = 0; i < n; i++)
	{
		if (strcmp(a[i].ma, mat) == 0)
			return i;	//trung			
	}
	return -1;//ko trung
}

void nhap1nv(NHANVIEN a[], int n, NHANVIEN &nv1)
{
	char mat[5];
	int k;
	do
	{
		cout << "Nhap Ma: "; cin.getline(mat, 5);
		k = TIMKIEM(a, n, mat);
		if (k != -1)
			cout << "Ma Trung!!Vui Long Nhap Lai!" << endl;
	} while (k != -1);
	strcpy(nv1.ma, mat);
	cout << "Nhap Ho va Ten: "; cin.getline(nv1.ten, 30);
	cout << "Nhap Ngay/Thang/Nam Sinh: "; cin.getline(nv1.ngsinh, 12);
	cout << "Nhap Gioi Tinh: "; cin.getline(nv1.gioitinh, 4);
	cout << "Nhap Dia Chi: "; cin.getline(nv1.diachi, 50);
	cout << "Nhap Luong Co Ban: "; cin >> nv1.luongcoban;
	cout << "Nhap So Ngay Cong: "; cin >> nv1.songaycong;
	nv1.luongthuclinh = nv1.luongcoban * nv1.songaycong;

	cin.ignore(); // xoa bo nho dem neu khong khi nhap sinh vien thu hai code se nhan ma cua sinh vien thu nhat
}

void tieude()
{
	cout << setw(5) << left << "Ma" << setw(20) << left << "HoVaTen" << setw(12) << left << "Ngaysinh" << setw(12) << left << "GioiTinh"
		<< setw(12) << left << "DiaChi" << setw(12) << left << "LuongCoBan" << setw(12) << left << "SoNgayCong" << setw(12) << left << "LuongThucLinh" << endl;
}

void nhapdsnv(NHANVIEN a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "-----------nhap nhan vien thu " << i + 1 <<"------------" <<endl;
		nhap1nv(a,n,a[i]);
	}
}

void xuat1nv(NHANVIEN &nv1)
{
	cout << setw(5)  << left << nv1.ma << setw(20) << left << nv1.ten << setw(12) << left << nv1.ngsinh << setw(12) << left << nv1.gioitinh 
		 << setw(12) << left << nv1.diachi << setw(12) << left << nv1.luongcoban << setw(12) << left << nv1.songaycong << setw(12) << left << nv1.luongthuclinh << endl;
}

void xuatdsnv(NHANVIEN a[], int n)
{	
	tieude();
	
	for (int i = 0; i < n; i++)
	{
		xuat1nv( a[i]);
	}
}

void hoanvi(NHANVIEN& a, NHANVIEN& b)
{
	NHANVIEN t = a;
	a = b;
	b = t;
}

void sapxepgiamtheoluong(NHANVIEN a[],int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (a[i].luongthuclinh < a[j].luongthuclinh)
				hoanvi(a[i], a[j]);
		}
	}
}

void xuatnvnu(NHANVIEN a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (stricmp(a[i].gioitinh, "nu") == 0)
			xuat1nv(a[i]);
	}
}
//chuan hoa
/*void chuan_gioitinh(char s[]) //thong nhat dua ve Nu, Nam
{
	//xoa ki tu trong thua
	for(int i = 0; i<strlen(s); i++)
	{
		if(s[i] == ' ')
		{
			strcpy(&s[i], &s[i+1]); 
			i--;
		}
	}
			strlwr(s);
		s[0] = s[0] - 32;
}*/
void xoanv(NHANVIEN a[], int& n)
{
	char mat[10];
	cout << "nhap ma can xoa : ";
	cin.getline(mat, 10);
	int vt = TIMKIEM(a, n, mat);
	if (vt == -1)
		cout << "khong co ma nhan vien nay : " << endl;
	else
		for (int i = vt; i < n  ; i++)
		{
			a[i] = a[i + 1];
			n--;
		}
}

int main()
{
	int n = 3;
	NHANVIEN a[10];

	//NHAP DANH SACH NHAN VIEN
	nhapdsnv(a,n);
	
	//XUAT DANH SACH NHAN VIEN
	cout << "------------\nDanh sach nhan vien sau khi nhap la------------ " << endl;
	xuatdsnv(a,n);	
	//SAP XEP GIAM DAN THEO LUONG
	cout << "------------\nDanh sach nhan vien sau khi sap xep la------------" << endl;
	sapxepgiamtheoluong(a,n);
	xuatdsnv(a,n);
	//XUAT NHAN VIEN NU
	cout << "--------------Danh sach nhan vien nu--------------" << endl;
	xuatnvnu(a,n);
	//XOA NHAN VIEN
	xoanv(a, n);
	xuatdsnv(a,n);


	cout << endl;
	system("pause");
	return 0;
}
