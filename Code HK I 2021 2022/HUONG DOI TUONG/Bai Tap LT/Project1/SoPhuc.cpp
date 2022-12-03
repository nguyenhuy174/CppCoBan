#include "SoPhuc.h"
#include <iostream>
#include <cmath>
using namespace std;

void SoPhuc::Nhap()
{
    cout << "Nhap phan thuc: ";
    cin >> this->thuc;
    cout << "Nhap phan ao: ";
    cin >> this->ao;
}

void SoPhuc::Xuat()
{
    if (thuc == 0) {
        if (ao == 0) {
            cout << "0" << endl;
        }
        else {
            cout << ao << "i" << endl;
        }
    }
    else {
        if (ao == 0) {
            cout << thuc << endl;
        }
        else {
            if (ao > 0) 
            {
                cout << thuc << "+" << ao << "i" << endl;
            }
            else {
                cout << thuc << ao << "i" << endl;
            }
        }
    }
}

void SoPhuc::cong(SoPhuc sp1, SoPhuc sp2)
{
    SoPhuc tong;
    tong.thuc = sp1.thuc + sp2.thuc;
    tong.ao = sp1.ao + sp2.ao;
    tong.Xuat();
}

void SoPhuc::tru(SoPhuc sp1, SoPhuc sp2)
{
    SoPhuc hieu;
    hieu.thuc = sp1.thuc - sp2.thuc;
    hieu.ao = sp1.ao - sp2.ao;
    hieu.Xuat();
}

void SoPhuc::nhan(SoPhuc sp1, SoPhuc sp2)
{
    SoPhuc multi;
    multi.thuc = sp1.thuc * sp2.thuc - sp1.ao * sp2.ao;   // z*z' = aa' - bb' + (ab' + a'b)i
    multi.ao = sp1.thuc * sp2.ao + sp2.thuc * sp1.ao;
    multi.Xuat();
}

void SoPhuc::chia(SoPhuc sp1, SoPhuc sp2)
{
    SoPhuc div;
    // z= c+di
    // z'= a+bi
    // z/z' = ((ac+bd)/(a^2 + b^2)) + ((ad-bc)/(a^2 + b^2))i
    div.thuc = ((sp1.thuc * sp2.thuc + sp1.ao * sp2.ao) / (pow(sp2.thuc, 2) + pow(sp2.ao, 2)));
    div.ao = ((sp1.ao * sp2.thuc - sp1.thuc * sp2.ao) / (pow(sp2.thuc, 2) + pow(sp2.ao, 2)));
    div.Xuat();
}


