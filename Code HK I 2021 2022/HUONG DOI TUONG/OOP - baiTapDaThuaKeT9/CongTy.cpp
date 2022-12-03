#include "CongTy.h"
#include <iostream>

using namespace std;

CongTy::CongTy()
{
}

CongTy::~CongTy()
{
}

void CongTy::nhapNVVP()
{
	system("cls");
	int n;
	cout << "So Nhan Vien Van Phong muon them: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		NhanVien* a = new NhanVienVanPhong;
		a->nhap();
		NVVP.push_back(a);
	}
}

void CongTy::nhapNVSX()
{
	system("cls");
	int n;
	cout << "So Nhan Vien San Xuat muon them: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		NhanVien* b = new NhanVienSanXuat;
		b->nhap();
		NVSX.push_back(b);
	}
}

void CongTy::nhapNVTT()
{
	system("cls");
	int n;
	cout << "So Nhan Vien Thuc Tap muon them: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		NhanVien* c = new ThucTap;
		c->nhap();
		NVTT.push_back(c);
	}
}

void CongTy::hienThiDS()
{
	int select;
	do
	{
		system("cls");
		cout << "\n*********QUAN LY DANH SACH NHAN VIEN CUA CONG TY*********\n";
		cout << "\n 1. HIEN THI DANH SACH NHAN VIEN VAN PHONG";
		cout << "\n 2. HIEN THI DANH SACH NHAN VIEN SAN XUAT";
		cout << "\n 3. HIEN THI DANH SACH NHAN VIEN THUC TAP";
		cout << "\n 4. HIEN THI TOAN BO DANH SACH NHAN VIEN TRONG CONG TY";
		cout << "\n 0. QUAY LAI";
		cout << "\n\n";

		cout << "\nNhap lua chon cua ban: ";
		cin >> select;

		switch (select)
		{
		case 0:
			break;
		case 1:
			system("cls");
			cout << "****DANH SACH NHAN VIEN VAN PHONG****\n";
			cout << "STT\tHo ten\tLuong\n";
			for (int i = 0; i < NVVP.size(); i++)
			{
				cout << "\n" << i + 1 << "\t "; NVVP[i]->xuat();
			}
			cout << endl;
			if (NVVP.size() == 0)
				cout << "Khong co nhan vien nao trong danh sach!\n\n";
			system("pause");
			break;
		case 2:
			system("cls");
			cout << "****DANH SACH NHAN VIEN SAN XUAT****\n";
			cout << "STT\tHo ten\tLuong\n";
			for (int i = 0; i < NVSX.size(); i++)
			{
				cout << "\n" << i + 1 << "\t "; NVSX[i]->xuat();
			}
			cout << endl;
			if (NVSX.size() == 0)
				cout << "Khong co nhan vien nao trong danh sach!\n\n";
			system("pause");;
			break;
		case 3:
			system("cls");
			cout << "****DANH SACH NHAN VIEN THUC TAP****\n";
			cout << "STT\tHo ten\tLuong\n";
			for (int i = 0; i < NVTT.size(); i++)
			{
				cout << "\n" << i + 1 << "\t "; NVTT[i]->xuat();
			}
			cout << endl;
			if (NVTT.size() == 0)
				cout << "Khong co nhan vien nao trong danh sach!\n\n";
			system("pause");
			break;
		case 4:
			system("cls");
			cout << "****DANH SACH NHAN VIEN VAN PHONG****\n";
			cout << "STT\tHo ten\tLuong\n";
			for (int i = 0; i < NVVP.size(); i++)
			{
				cout << "\n" << i + 1 << "\t "; NVVP[i]->xuat();
			}
			cout << endl;
			if (NVVP.size() == 0)
				cout << "Khong co nhan vien nao trong danh sach!\n\n";

			cout << "****DANH SACH NHAN VIEN SAN XUAT****\n";
			cout << "STT\tHo ten\tLuong\n";
			for (int i = 0; i < NVSX.size(); i++)
			{
				cout << "\n" << i + 1 << "\t "; NVSX[i]->xuat();
			}
			cout << endl;
			if (NVSX.size() == 0)
				cout << "Khong co nhan vien nao trong danh sach!\n\n";

			cout << "****DANH SACH NHAN VIEN THUC TAP**** \n";
			cout << "STT\tHo ten\tLuong\n";
			for (int i = 0; i < NVTT.size(); i++)
			{
				cout << "\n" << i + 1 << "\t "; NVTT[i]->xuat();
			}
			cout << endl;
			if (NVTT.size() == 0)
				cout << "Khong co nhan vien nao trong danh sach!\n\n";
			system("pause");
			break;
		default:
			break;
		}
	} while (select != 0);
}


