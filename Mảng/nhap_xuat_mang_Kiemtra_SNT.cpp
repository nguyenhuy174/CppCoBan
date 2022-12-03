#include <iostream>
using namespace std;

void nhap_mang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Phan tu thu a[" << i << "] la: ";
		cin >> a[i];
	}
}
void xuatmang(int a[], int n)
{
	cout << "Cac phan tu trong mang la: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
	cout << endl;
}
bool kiemtraNT(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 2)
			return false;
		for (int h = 2; h < a[i]; h++)
		{
			if (a[i] % h == 0)
				return false;
		}
		return true;
	}
}
void solonnhat(int a[], int n)
{
	int max = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
			max = a[i];
	}
	cout << "So lon nhat trong mang la: " << max << endl
		 << endl;
}
int main()
{
	int a[100];
	int n;
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	cout << "\n";
	nhap_mang(a, n);
	xuatmang(a, n);
	kiemtraNT(a, n);
	if (kiemtraNT(a, n) == true)
	{
		cout << "\nMang toan so nguyen to\n\n";
	}
	else
	{
		cout << "\nMang khong toan so nguyen to\n\n";
	}
	solonnhat(a, n);
	system("pause");
	return 0;
}
