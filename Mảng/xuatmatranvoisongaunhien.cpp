#include <iostream>
#include <ctime>
#include <cstdlib>
#include <windows.h>
using namespace std;
void scolor(int code)
{
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(color,code);
}
		
void xuat_mang2c (int a[][100], int m , int n){
    srand (time(NULL));
    cout<<"MA TRAN ngau nhien voi so hang va cot vua nhap la: \n";
	for ( int i = 0 ; i<m; i++)
	 {
	 
	 for ( int j=0; j<n; j++)
	 { 
	  a[i][j] = rand () %10;
	  scolor(5);
	  cout << a[i][j]<<"\t";
	    
	 }
	 cout<<endl;
	  }
}
int main ()
{
	int a[100][100];
	int m,n;
	cout<<"Nhap hang cua ma tran: "; cin>>m;
	cout<<"Nhap cot cua ma tran: "; cin >> n;
	xuat_mang2c (a,m,n);
	srand (time(NULL));
	for ( int k = 0;;k++)
	{ 
	int h = rand()%2;
	scolor (5);
	cout<<h;
	}
	
return 0;
}
