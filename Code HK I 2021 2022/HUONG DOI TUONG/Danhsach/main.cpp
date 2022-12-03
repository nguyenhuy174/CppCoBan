#include<iostream>
#include"DS_nguoi.h"

using namespace std;

int main()
{
	cout << "Lua Chon\n";
	cout << "1 Them Nguoi\n";
	cout << "2 Xoa Nguoi\n";
	cout << "3 Chinh Sua\n";
	cout << "4 Hien Thi Danh Sach\n";
	DS_nguoi x;
	int o;
	do
	{
		cout << "Nhap option : ";
		cin >> o;
		if (o != 1 && o != 2 && o != 3 && o != 4)
			cout << "Nhap lai:\n";

	} while (o != 1 && o != 2 && o != 3 && o != 4);


	switch (o)
	{
	case 1:
		x.themNguoi();
		break;
	case 2:
		x.xoaNguoi();
		break;
	case 3:
		x.updateNguoi();
		break;
	case 4:
		x.hienThi();
		break;
	default:
		break;
	}
	cout << endl;
	system("pause");
	return 0;
}