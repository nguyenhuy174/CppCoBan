#include "Trogiang.h"
#include<iostream>

using namespace std;
Trogiang::Trogiang()
{
	this->Luong1gio = 0;
	this->gioCong = 0;
}

void Trogiang::update()
{
	Nguoi::update();
	cout << "Enter Salary One Hour: ";
	cin >> this->Luong1gio;
	cout << "Enter Work Time: ";
	cin >> this->gioCong;
}

void Trogiang::input()
{
	Nguoi::input();
	cout << "Enter Salary One Hour: ";
	cin >> this->Luong1gio;
	cout << "Enter Work Time: ";
	cin >> this->gioCong;
}

void Trogiang::output()
{
	Nguoi::display();
	cout << "Salary: " << countSalary();
}

int Trogiang::countSalary()
{
	return this->Luong1gio * this->gioCong;
}
