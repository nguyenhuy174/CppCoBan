#include <iostream>
#include <cmath>
using namespace std;
	struct SP {
		float thuc;
		float ao;
		};
void nhap(SP &sp) {
    cout << "Nhap phan thuc: ";
    cin >> sp.thuc;
    cout << "Nhap phan ao: ";
    cin >> sp.ao;
}

void xuat(SP sp) {
    if (sp.thuc==0) {
        if (sp.ao==0) {
            cout << "0";
        } else {
            cout << sp.ao << "i";
        }
    } else {
        if (sp.ao==0) {
            cout << sp.thuc;
        } else {
            if (sp.ao>0) {
              cout << sp.thuc << "+" << sp.ao << "i";
              } else {
              	cout << sp.thuc << sp.ao << "i";
              	}
    
        }
    }
}
void nhapsp1(SP &sp1) {
    cout << "Nhap phan thuc: ";
    cin >> sp1.thuc;
    cout << "Nhap phan ao: ";
    cin >> sp1.ao;
}
void nhapsp2(SP &sp2) {
    cout << "Nhap phan thuc: ";
    cin >> sp2.thuc;
    cout << "Nhap phan ao: ";
    cin >> sp2.ao;
}
void tinhtong(SP sp1, SP sp2) {
	SP sumsp;
	sumsp.thuc = sp1.thuc + sp2.thuc;
	sumsp.ao = sp1.ao + sp2.ao;
	if (sumsp.ao>0) {
        cout << "Tong cua 2 so phuc la: " << sumsp.thuc << "+" << sumsp.ao << "i";
        } else {
            cout << "Tong cua 2 so phuc la: " << sumsp.thuc << sumsp.ao << "i";
            }	
}
void hieu2sp(SP sp1, SP sp2) {
	SP sp3;
	sp3.thuc = sp1.thuc - sp2.thuc;
	sp3.ao = sp1.ao - sp2.ao;
	if (sp3.ao>0) {
        cout << "Hieu cua 2 so phuc la: " << sp3.thuc << "+" << sp3.ao << "i";
        } else {
            cout << "Hieu cua 2 so phuc la: " << sp3.thuc << sp3.ao << "i";
            }	
}
void nhan2sp(SP sp1, SP sp2) {
	SP sp4;
	sp4.thuc = sp1.thuc*sp2.thuc - sp1.ao*sp2.ao;   // z*z' = aa' - bb' + (ab' + a'b)i
	sp4.ao = sp1.thuc*sp2.ao + sp2.thuc*sp1.ao;
	if (sp4.ao>0) {
       cout << "Tich cua 2 so phuc la: " << sp4.thuc << "+" << sp4.ao << "i";
        } else {
           cout << "Tich cua 2 so phuc la: " << sp4.thuc << sp4.ao << "i";
            }	
}

void chia2sp(SP sp1, SP sp2) {
	SP sp5;
	// z= c+di
    // z'= a+bi
    // z/z' = ((ac+bd)/(a^2 + b^2)) + ((ad-bc)/(a^2 + b^2))i
  sp5.thuc = ((sp1.thuc*sp2.thuc + sp1.ao*sp2.ao)/(pow(sp2.thuc,2)+pow(sp2.ao,2)));
  sp5.ao = ((sp1.ao*sp2.thuc - sp1.thuc*sp2.ao)/(pow(sp2.thuc,2)+pow(sp2.ao,2)));
if (sp5.ao>0) {
       cout << "Thuong cua 2 so phuc la: " << sp5.thuc << "+" << sp5.ao << "i";
        } else {
           cout << "Thuong cua 2 so phuc la: " << sp5.thuc << sp5.ao << "i";
            }	
}
int main () {
	SP sp, sp1, sp2, sumsp;
	nhap(sp);
	xuat(sp);
	cout << endl;
	nhapsp1(sp1);
	nhapsp2(sp2);
	tinhtong(sp1,sp2);
	cout << endl;
	hieu2sp(sp1,sp2);
	cout << endl;
	nhan2sp(sp1,sp2);
	cout << endl;
	chia2sp(sp1,sp2);
	return 0;
	}
	
