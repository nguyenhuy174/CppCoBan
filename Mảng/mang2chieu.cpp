#include <iostream>
using namespace std;
void Nhap_mang ( int a[][100],int n){
	for (int i =1; i<=n; i++)
	{ for (int j=1; j<=n;j++)
	{
		cout << "nhap phan tu thu a["<<i<<"]["<<j<<"]: ";
		cin>> a[i][j];
		}}}
void xuatmang ( int a[][100], int n){
	for (int i =1; i<=n; i++)
	{ for (int j=1; j<=n;j++)
	{ for (int j=1; j<=n;j++)
	{
	cout << a[i][j]<<"   ";
	}
	
	}

	}
	cout<<endl;
	}
int main (){
	int n;
	int a[100][100];
	cout<<"nhap so phan tu cua mang: ";
	cin >> n;
	Nhap_mang (a,n);
	xuatmang(a,n);
	return 0;
	}
	
