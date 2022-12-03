#include<iostream>
#include<string>
using namespace std;
void capphat(int *&a, int n)
{
	a = new int[n];
}
void nhap(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i << ":";
		cin >> *(a + i);
	}
}
void xuat(int *a, int n)
{
	cout << "Cac so nguyen vua nhap: ";
	for (int i = 0; i < n; i++)
		cout << *(a + i)<<" ";

}
bool KiemTraNT(int n)
{
	if (n < 2)
		return false;
	for (int i = 2; i < n;i++)
	if (n%i == 0)
		return false;
	return true;
}
int DemSoNT(int *a, int n)
{
	int dem = 0; 
	for (int i = 0; i < n;i++)
	if (KiemTraNT(*(a + i)) == true)
		dem++;
	return dem;
}

int main()
{
	int *a;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	capphat(a,n);
	nhap(a,n);
	xuat(a,n);
	cout << "\nSo luong so nguyen to:" << DemSoNT(a, n);
	delete[] a;
	cout << endl;
	system("pause");
	return 0;
}
