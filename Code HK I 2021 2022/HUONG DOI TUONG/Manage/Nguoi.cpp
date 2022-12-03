#include "Nhanvien.h"

using namespace std;
Nguoi::Nguoi(void)
{

}
Nguoi::~Nguoi(void)
{
}
void Nguoi::nhap()
{
	cout << "Nhap ID: "; 
	cin >> ID; 
	cin.ignore();
	cout << "Nhap ngay sinh d/m/y : ";
	cin >> ngay; 
	cin.ignore(); 
	cin >> thang; 
	cin.ignore(); 
	cin >> nam;
}
void Nguoi::xuat()
{
	cout << "ID: " << ID << "\nNgay sinh: " << ngay << "/" << thang << "/" << nam << endl;
}
long Nguoi::luong()
{
	return 0;
}