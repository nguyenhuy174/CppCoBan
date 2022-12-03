#include "trogiang.h"


trogiang::trogiang(void)
{
}


trogiang::~trogiang(void)
{
}
void trogiang::nhap()
{
	nguoi::nhap();
	cout << "so gio lam viec: "; cin >> giocong;
}
void trogiang::xuat()
{
	nguoi::xuat();
	cout << "so gio lam viec:" << giocong << endl;
}
long trogiang::luong()
{
	return giocong * 300000;
}