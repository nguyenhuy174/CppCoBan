#include <iostream>
#include "GioHang.h"
#include "SanPham.h"

using namespace std;

int main()
{
	SanPham sp1(1, "PlayStation 5", 1000);
	SanPham* sp2 = new SanPham(2, "Nintendo Switch", 730, 2);
	SanPham* sp3 = new SanPham(3, "RTX 3060 Super", 800, 3);
	GioHang* gh = new GioHang();
	sp2->hienthi();
	sp3->hienthi();
	gh->them(sp1, 1);
	gh->them(sp1, 1);
	gh->them(sp1, 1);
	cout << "Gio hang: " << endl;
	gh->hienThi();
	cout << "\nTong tien: ";
	cout << gh->tongTien() << endl;
	//gh->xoa();
	//gh->hienThi();
	return 0;
}