#include <iostream>
using namespace std;

void nhapMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a [ " << i << " ] : ";
		cin >> a[i];
	}
}
void xuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "   ";
	}
}
void hoanVi(int& x, int& y) 
{
	int t;
	t = x; x = y; y = t;
}
void sapXep(int a[], int n) {

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] < a[j])
			{
				hoanVi(a[i], a[j]);
			}
		}    
	}
}
int main()
{
	int a[50];
	int n;
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	nhapMang(a, n);
	xuatMang(a, n);
	sapXep(a, n);
	cout << "\nBa so lon nhat theo thu tu giam dan: ";
	for (int i = 0; i < 3; i++)
	{
		cout << a[i] << "   ";
	}
	cout << endl;
	system("pause");
	return 0;
}