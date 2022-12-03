#include <iostream>
using namespace std;
int main()
{
	int a, s = 0;
	cout << "Nhap a: ";
	cin >> a;
	for (int i = 1; i <= a - 1; i++)
	{
		if (a % i == 0)
			s = s + i;
	}
	if (s == a)
		cout << "so " << a << " la so hoan chinh" << endl;
	else
		cout << "so " << a << " khong phai la so hoan chinh" << endl;
    system("pause");
	return 0;
}
