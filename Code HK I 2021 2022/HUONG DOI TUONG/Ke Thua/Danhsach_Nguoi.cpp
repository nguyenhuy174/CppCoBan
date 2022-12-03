#pragma once
#include "Danhsach_Nguoi.h"
#include"Nhanvien.h"
#include"Giangvien.h"
#include"Trogiang.h"
#include<iostream>
#include<string>
#define MAX 100

using namespace std;
int Danhsach_Nguoi::TimMa(string id)
{
	for (int i = 1; i <= this->Songuoi; i++) {
		if (this->ds[i].getMa() == ma) {
			return i;
		}
	}
	return -1;
}

int Danhsach_Nguoi::TimChucvu(string chucvu)
{
	int i;
	if (chucvu == "Nhanvien")
		i = 1;
	else if (chucvu == "Giangvien")
		i = 2;
	else {
		i = 3;
	}

	return i;
}

Danhsach_Nguoi::Danhsach_Nguoi()
{
	this->Songuoi = 0;
}


void Danhsach_Nguoi::ThemNguoi()
{
	int option;
	do {
		system("cls");
		cout << "Choosed career\n";
		cout << "0 is exit\n";
		cout << "1 is Nhanvien\n";
		cout << "2 is Giangvien\n";
		cout << "3 is Trogiang\n";
		cout << "Enter option: ";
		cin >> option;
		cin.ignore(1);
		if (option != 0 && option != 1 && option != 2 && option != 3) {
			cout << "Enroll!";
			system("pasue");
		}
		else if (option == 1) {
			Nguoi* a = new Nhanvien;
			a->input();
			if (this->Songuoi == MAX) {
				cout << "full!\n ";
			}
			else
			{
				this->ds[this->Songuoi + 1] = *a;
				this->ds[this->Songuoi + 1].setLuong(a->Tinhluong());
				this->ds[this->Songuoi + 1].setChucvu("Nhanvien");

				this->Songuoi++;
			}
			system("pasue");
		}
		else if (option == 2) {
			Nguoi* a = new Giangvien;
			a->input();
			if (this->Songuoi == MAX) {
				cout << "full!\n ";
			}
			else
			{
				this->ds[this->Songuoi + 1] = *a;
				this->ds[this->Songuoi + 1].setLuong(a->Tinhluong());
				this->ds[this->Songuoi + 1].setChucvu("Giangvien");
				this->Songuoi++;
			}
			system("pasue");
		}
		else if (option == 3) {
			Nguoi* a = new Trogiang;
			a->input();
			if (this->Songuoi == MAX) {
				cout << "full!\n ";
			}
			else
			{
				this->ds[this->Songuoi + 1] = *a;
				this->ds[this->Songuoi + 1].setLuong(a->Tinhluong());
				this->ds[this->Songuoi + 1].setChucvu("Trogiang");
				this->Songuoi++;
			}
			system("pasue");
		}

	} while (option != 0);
}

void Danhsach_Nguoi::XoaNguoi()
{
	string ma;
	cout << "Enter id: ";
	getline(cin, ma);
	int index = TimMa(ma);
	if (index == -1) {
		cout << "Not found!\n";
	}
	else
	{
		for (int i = index; i <= this->Songuoi; i++) {
			this->ds[i] = this->ds[i + 1];
		}this->Songuoi--;
	}
}

void Danhsach_Nguoi::Update_Nguoi()
{
	string ma;
	cout << "Enter id: ";
	getline(cin, ma);
	int index = TimMa(ma);
	if (index == -1) {
		cout << "Not found!\n";
	}
	else {
		int major = TimChucvu(this->ds[index].getChucvu());
		if (major == 1) {
			Nguoi* a = new Nhanvien;
			a->update();
			this->ds[index] = *a;
			this->ds[index].setLuong(a->Tinhluong());
			this->ds[index].setMa(ma);
			this->ds[index].setChucvu("Nhanvien");
		}
		else if (major == 2) {
			Nguoi* a = new Giangvien;
			a->update();
			this->ds[index] = *a;
			this->ds[index].setLuong(a->Tinhluong());
			this->ds[index].setMa(ma);
			this->ds[index].setChucvu("Giangvien");
		}
		else {
			Nguoi* a = new Trogiang;
			a->update();
			this->ds[index] = *a;
			this->ds[index].setLuong(a->Tinhluong());
			this->ds[index].setMa(ma);
			this->ds[index].setChucvu("Trogiang");
		}
	}

}

void Danhsach_Nguoi::HienThi_ds()
{
	for (int i = 1; i <= this->Songuoi; i++) {
		cout << "======================================\n";
		this->ds[i].output();
	}
}



