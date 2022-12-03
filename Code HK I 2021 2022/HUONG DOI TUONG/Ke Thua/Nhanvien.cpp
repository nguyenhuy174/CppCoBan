#include "Nhanvien.h"
#include<iostream>

using namespace std;

Nhanvien::Nhanvien()
{
    this->Songaylam = 0;
    this->LuongNgay = 0;
}

void Nhanvien::input()
{
    Nguoi::input();
    cout << "Nhap so ngay lam : ";
    cin >> this->Songaylam;
    cout << "Nhap luong/ngay : ";
    cin >> this->LuongNgay;
    cin.ignore(1);
}

void Nhanvien::output()
{
    Nguoi::output();
    cout << "Luong: " << this->Tinhluong();
}

void Nhanvien::update()
{
    Nguoi::update();
    cout << "Nhap so ngay lam: ";
    cin >> this->Songaylam;
    cout << "Nhap Luong/ngay: ";
    cin >> this->LuongNgay;
    cin.ignore(1);
}

void Nhanvien::setLuongNgay(int LuongNgay)
{
    this->LuongNgay = LuongNgay;
}

void Nhanvien::setSongaylam(int Songaylam)
{
    this->Songaylam = Songaylam;
}

int Nhanvien::getLuongNgay()
{
    return this->LuongNgay;
}

int Nhanvien::getSongaylam()
{
    return this->Songaylam;
}



int Nhanvien::Tinhluong()
{
    return this->Songaylam * this->LuongNgay;
}
