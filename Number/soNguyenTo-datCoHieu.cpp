#include <iostream>
using namespace std;

int main()
{
	int n;
	bool ch = true; //int ch=1 (true); int ch =0 (false)

	do
	{
		cout << "Nhap n: ";
		cin >> n;
		if (n < 0)
			cout << "Ban nhap sai. Moi ban nhap lai! " << endl;
	} while (n <= 0);
	for (int i = 2; i <= n - 1; i++)
	{
		if (n % i == 0)
		{
			ch = false; //cap nhat lai
			break;
		}
	}
	if (ch == true)
		cout << n << " la so NT\n";
	else
		cout << n << " ko la so NT\n";
	system("pause");
	return 0;
}
