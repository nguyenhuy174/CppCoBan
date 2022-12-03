#include <iostream>
#include "GioHang.h"
#include "SanPham.h"

using namespace std;

int main() 
{
	SanPham sp1(1, "Dien Thoai", 100);
	SanPham* sp2= new SanPham(2, "Tivi", 430);
	SanPham* sp3 = new SanPham(2, "Wash", 200);
	GioHang* gh = new GioHang();
	gh->themSP(sp1, 1);
	cout << "Gio hang: " << endl;  
	gh->hienThiSP();
	cout << "\nTong tien: ";
	cout << gh->tongTienSP() << endl;
	
	return 0;
}