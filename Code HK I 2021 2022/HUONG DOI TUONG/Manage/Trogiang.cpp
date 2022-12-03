#include "Trogiang.h"


Trogiang::Trogiang(void)
{
}


Trogiang::~Trogiang(void)
{
}
void Trogiang::nhap()
{
	Nguoi::nhap();
	cout << "so gio lam viec: "; cin >> giocong;
}
void Trogiang::xuat()
{
	Nguoi::xuat();
	cout << "so gio lam viec:" << giocong << endl;
}
long Trogiang::luong()
{
	return giocong * 300000;
}