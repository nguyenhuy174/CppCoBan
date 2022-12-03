#include <iostream>
#include "Tron.h"
#include "Hinhchunhat.h"
#include "Tamgiac.h"
#include "PhuongTrinhBacNhat.h"
#include "PhuongTrinhBac2.h"
#include "PhanSo.h"
#include "SoPhuc.h"
using namespace std;

int main()
{
	Tron t(10);
	cout << "Chu vi hinh tron: " << t.chuVi() << endl;
	cout << "Dien tich hinh tron: " << t.dienTich() << endl;

	//CLASS CHU NHAT
	Hinhchunhat c(3, 4);
	cout << "Chu vi HCN: " << c.chuVihcn() << endl;
	cout << "Dien tich HCN: " << c.dienTichhcn() << endl;

	//CLASS TAM GIAC
	Tamgiac g(4, 5, 7);
	if (g.hople() == true)
	{
		cout << "Chu vi Tam giac: " << g.chuVi() << endl;
		cout << "Dien tich Tam giac: " << g.dienTich() << endl;
	}
	else
	{
		cout << "Do dai 3 canh KHONG tao thanh tam giac\n";
	}

	//Xay dung Class giai phuong trinh ax + b = 0
	PhuongTrinhBacNhat n;
	n.Nhap();
	if (n.hopLe() == true)
		cout << "X = " << n.ketQua() << endl;
	else
		cout << "\nCan't SOLVE this equation\n";

	//Xay dung Class giai ax ^ 2 + bx + c = 0
	cout << "Phuong trinh bac hai" << endl;
	PhuongTrinhBac2 h(2.5, 3, 6);
	if (h.delta() == 0)
		cout << "Phuong trinh co 1 nghiem kep: X1 = X2 = " << h.nghiemKep() << "\n\n";
	else
		if (h.delta() < 0)
			cout << "PHUONG TRINH VO NGHIEM\n\n";
		else
			cout << "Phuong trinh co 2 nghiem phan biet: "
				 << "X1 = " << h.nghiem1() << "\t" << "X2 = " << h.nghiem2() << "\n\n";

	//CLASS PHAN SO
	cout << "\n\nPhan So Da Nhap La : ";
	PhanSo ps1(2, 3), ps2(5, 6);
	cout << "\nCong 2 Phan So : ";
	ps1.cong(ps1, ps2);
	cout << "\nTru 2 Phan So : ";
	ps1.tru(ps1, ps2);
	cout << "\nNhan 2 Phan So : ";
	ps1.nhan(ps1, ps2);
	cout << "\nChia 2 Phan So : ";
	ps1.chia(ps1, ps2);
	cout << endl;
	
	//CLASS SO PHUC
	SoPhuc sp1, sp2;
	sp1.Nhap();
	sp2.Nhap();
	sp1.Xuat();
	sp2.Xuat();
	cout << "Tong 2 so phuc: "; sp1.cong(sp1, sp2);
	cout << endl;
	cout << "Hieu 2 so phuc: "; sp1.tru(sp1, sp2);
	cout << endl;
	cout << "Tich 2 so phuc: "; sp1.nhan(sp1, sp2);
	cout << endl;
	cout << "Thuong 2 so phuc: "; sp1.chia(sp1, sp2);
	cout << endl;
}