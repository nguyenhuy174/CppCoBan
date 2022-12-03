#include "nhanvien.h"

using namespace std;
nguoi::nguoi(void)
{
}
nguoi::~nguoi(void)
{
}
void nguoi::nhap()
{
	cout << "Nhap ID:"; cin >> ID; cin.ignore();
	cout << "Nhap ngay sinh d/m/y :";
	cin >> ngay; cin.ignore(); cin >> thang; cin.ignore(); cin >> nam;
}
void nguoi::xuat()
{
	cout << "ID:"<<ID << "\nNgay sinh: " << ngay << "/" << thang << "/" << nam << endl;
}
long nguoi::luong()
{
	return 0;
}