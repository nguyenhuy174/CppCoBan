#include "Nhanvien.h"
#include<iostream>

using namespace std;

Nhanvien::Nhanvien()
{
    this->ngayCong = 0;
    this->salary1Day = 0;
}

void Nhanvien::input()
{
    Nguoi::input();
    cout << "Enter Days Work: ";
    cin >> this->ngayCong;
    cout << "Enter Salary One Day: ";
    cin >> this->salary1Day;
    cin.ignore(1);
}

void Nhanvien::display()
{
    Nguoi::display();
    cout << "Salary: " << this->countSalary();
}

void Nhanvien::update()
{
    Nguoi::update();
    cout << "Enter Days Work: ";
    cin >> this->ngayCong;
    cout << "Enter Salary One Day: ";
    cin >> this->salary1Day;
    cin.ignore(1);
}

void Nhanvien::setsalary1Day(int salary1Day)
{
    this->salary1Day = salary1Day;
}

void Nhanvien::setngayCong(int ngayCong)
{
    this->ngayCong = ngayCong;
}

int Nhanvien::getsalary1Day()
{
    return this->salary1Day;
}

int Nhanvien::getngayCong()
{
    return this->ngayCong;
}



int Nhanvien::countSalary()
{
    return this->ngayCong * this->salary1Day;
}
