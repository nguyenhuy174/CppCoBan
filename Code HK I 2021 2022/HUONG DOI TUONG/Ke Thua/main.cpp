#include<iostream>
#include"Danhsach_Nguoi.h"

using namespace std;

int main()
{
	cout << "Lua Chon\n";
	cout << "1 Them Nguoi\n";
	cout << "2 Xoa Nguoi\n";
	cout << "3 Chinh Sua\n";
	cout << "4 Hien Thi Danh Sach\n";
	Danhsach_Nguoi h;
	int o;
	do
	{
		cout << "Nhap Lua chon : ";
		cin >> o;
		if (o != 1 && o != 2 && o != 3 && o != 4)
			cout << "Nhap lai:\n";

	} while (o != 1 && o != 2 && o != 3 && o != 4);
	

	switch (o)
	{
	case 1:
		h.ThemNguoi();
		break;
	case 2:
		h.XoaNguoi();
		break;
	case 3:
		h.Update_Nguoi();
		break;
	case 4:
		h.HienThi_ds();
		break;
	default:
		break;
	}
	
	cout << endl;
	system("pause");
	return 0;
}