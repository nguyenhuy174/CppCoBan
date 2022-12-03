#include <iostream>
#include <cmath>

using namespace std;

struct DIEM {
	float x, y;
	};
void nhapdiem(DIEM &d) {
	cout << "Nhap hoanh do: "; cin >> d.x;
	cout << "Nhap tung do: "; cin >> d.y;
	}
void xuatdiem (DIEM d) {
	cout << "( " << d.x << ";" << d.y << " )"<<endl;
	}
float KC (DIEM d1, DIEM d2) {
	return sqrt(pow((d2.x - d1.x), 2) + pow((d2.y - d1.y),2));
	}
float dientich_tamgiac(DIEM A, DIEM B, DIEM C) {
float AB, AC, CA;
	AB = KC(A,B);
	AC = KC(A,C);
	CA = KC(C,A);
float p = (AB + AC + CA)/2;
    if (kiemtra_tamgiac(A,B,C)==true)
      return sqrt(p*(p-AB)*(p-AC)*(p-CA));
    return -1;
int main () {
	DIEM d, d1, d2;
	nhapdiem(d);
	xuatdiem(d);
	system("pause");
	return 0;
}
