#include <iostream>
#include <vector>
#include"CongTy.h"
#include"NhanVien.h"
#include"NhanVienVanPhong.h"
#include"NhanVienSanXuat.h"
#include"ThucTap.h"

using namespace std;

void menu()
{
	CongTy* BiaSaiGon = new CongTy;
	int select;
	do
	{
		system("cls");
		cout << "\n****HE THONG QUAN LY DANH SACH NHAN VIEN CUA CONG TY****\n";
		cout << "\n 1. THEM NHAN VIEN VAN PHONG";
		cout << "\n 2. THEM NHAN VIEN SAN XUAT";
		cout << "\n 3. THEM NHAN VIEN THUC TAP";
		cout << "\n 4. HIEN THI";
		cout << "\n 0. THOAT  ";
		cout << "\n\n";
		
		cout << "\nNhap lua chon cua ban: ";
		cin >> select;
		
		switch (select)
		{
		case 1:
			BiaSaiGon->nhapNVVP();
			break;
		case 2:
			BiaSaiGon->nhapNVSX();
			break;
		case 3:
			BiaSaiGon->nhapNVTT();
			break;
		case 4:
			BiaSaiGon->hienThiDS();
			break;
		default:
			cout << "Lua chon khong hop le!\n";
			break;
		} 
	} while (select != 0);
}

int main()
{
	int select;
	menu();
	cout << endl;	
	return 0;
}
