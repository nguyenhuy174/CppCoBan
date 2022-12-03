#pragma once
#include "DS_nguoi.h"
#include"Nhanvien.h"
#include"Giangvien.h"
#include"Trogiang.h"
#include<iostream>
#include<string>
#define MAX 100

using namespace std;

int DS_nguoi::findId(string id)
{
	for (int i = 1; i <= this->size; i++) {
		if (this->list[i].getId() == id) {
			return i;
		}
	}
	return -1;
}

int DS_nguoi::findMajor(string major)
{
	int i;
	if (major == "Nhanvien")
		i = 1;
	else if (major == "Giangvien")
		i = 2;
	else {
		i = 3;
	}
	return i;
}

DS_nguoi::DS_nguoi()
{
	this->size = 0;
}

void DS_nguoi::themNguoi()
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
			system("pause");
		}
		else if (option == 1) {
			Nguoi* a = new Nhanvien;
			a->input();
			if (this->size == MAX) {
				cout << "full!\n ";
			}
			else
			{
				this->list[this->size + 1] = *a;
				this->list[this->size + 1].setSalary(a->countSalary());
				this->list[this->size + 1].setMajor("Nhanvien");

				this->size++;
			}
			system("pasue");
		}
		else if (option == 2) {
			Nguoi* a = new Giangvien;
			a->input();
			if (this->size == MAX) {
				cout << "full!\n ";
			}
			else
			{
				this->list[this->size + 1] = *a;
				this->list[this->size + 1].setSalary(a->countSalary());
				this->list[this->size + 1].setMajor("Giangvien");
				this->size++;
			}
			system("pasue");
		}
		else if (option == 3) {
			Nguoi* a = new Trogiang;
			a->input();
			if (this->size == MAX) {
				cout << "full!\n ";
			}
			else
			{
				this->list[this->size + 1] = *a;
				this->list[this->size + 1].setSalary(a->countSalary());
				this->list[this->size + 1].setMajor("Trogiang");
				this->size++;
			}
			system("pause");
		}

	} while (option != 0);
}

void DS_nguoi::xoaNguoi()
{
	string id;
	cout << "Enter id: ";
	getline(cin, id);
	int index = findId(id);
	if (index == -1) {
		cout << "Not found!\n";
	}
	else
	{
		for (int i = index; i <= this->size; i++) {
			this->list[i] = this->list[i + 1];
		}this->size--;
	}
}

void DS_nguoi::updateNguoi()
{
	string id;
	cout << "Enter id: ";
	getline(cin, id);
	int index = findId(id);
	if (index == -1) {
		cout << "Not found!\n";
	}
	else {
		int major = findMajor(this->list[index].getMajor());
		if (major == 1) {
			Nguoi* a = new Nhanvien;
			a->update();
			this->list[index] = *a;
			this->list[index].setSalary(a->countSalary());
			this->list[index].setId(id);
			this->list[index].setMajor("Nhanvien");
		}
		else if (major == 2) {
			Nguoi* a = new Giangvien;
			a->update();
			this->list[index] = *a;
			this->list[index].setSalary(a->countSalary());
			this->list[index].setId(id);
			this->list[index].setMajor("Giangvien");
		}
		else {
			Nguoi* a = new Trogiang;
			a->update();
			this->list[index] = *a;
			this->list[index].setSalary(a->countSalary());
			this->list[index].setId(id);
			this->list[index].setMajor("Trogiang");
		}
	}

}

void DS_nguoi::hienThi()
{
	for (int i = 1; i <= this->size; i++) {
		cout << "======================================\n";
		this->list[i].display();
	}
}




