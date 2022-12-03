#include <iostream>
#include "soPhuc.h"

using namespace std;

int main()
{
	soPhuc p, q, r;
	cin >> p >> q;
	cout << "\nSo Phuc Da Nhap La:\n";
	cout << "So phuc p = " << p << "So phuc q = " << q;
	cout << "\nTong 2 so phuc la :  " << p + q;
	cout << "\nHieu 2 so phuc la :  " << p - q;
	cout << "\nTich 2 so phuc la :  " << p * q;
	cout << "\nThuong 2 so phuc la :  " << p / q;
	cout << "\np*2 = " << p * 2;
	cout << "\n2*p = " << 2 * p;
	cout << "\n2+p = " << 2 + p;
	cout << "\np+2 = " << p + 2;
	cout << "\n2-p = " << 2 - p;
	cout << "\np-2 = " << p - 2;
	cout << "\np/2 = " << p / 2;
	cout << "\n2/p = " << 2 / p;

	cout << endl;
	system("pause");
	return 0;
}


