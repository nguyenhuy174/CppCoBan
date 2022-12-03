#include <iostream>
#include <string>
using namespace std;

int main()
{
	NhanSu* t = new TroGiang(1, "tuan", 100.0, 10.0);
	t->hienThi();
	system("pause");
	return 0;
}