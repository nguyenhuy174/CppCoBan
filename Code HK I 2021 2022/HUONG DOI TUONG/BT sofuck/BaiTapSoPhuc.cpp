#include <iostream>
#include "SoPhuc.h"
using namespace std;

int main() {
	cout << "Chuong trinh tinh so phuc: " << endl;
	SoPhuc s1(5, 2);
	SoPhuc s2(4, 1);
	
	SoPhuc s = s1 / s2;
	SoPhuc t = s1 / 4;
	SoPhuc z =   5/s1;

	s.HienThi();
	t.HienThi();
	z.HienThi();

	return 0;

}