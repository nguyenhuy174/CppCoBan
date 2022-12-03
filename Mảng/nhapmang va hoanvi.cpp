#include <iostream>
#include <algorithm> // ham swap nam trong thu vien nay
using namespace std;

void nhap_mang(int a[], int n)
{
	for(int i = 0; i<n; i++)
	{
	   cout<<"a["<<i<<"]= ";
	     cin>>a[i];
    }
}
void xuat_mang(int a[], int n)
{
	cout<<"Cac phan tu cua mang a la: ";
	   for(int i = 0; i<n; i++)
	   {
		  cout<<a[i]<<"\t";
	}
}
void hoanvi(int &x, int &y) {
    int t;
    t = x; x = y; y = t;
}
void sapxep(int a[], int n){

	for ( int i = 0; i<n-1; i++)
	{ 	
	    for (int j= i+1; j<n; j++)
	   {
	   	if (a[i] < a[j])
	    {    
	      hoanvi(a[i],a[j]);
	    }
       }    //7911393376
    }
}
 int main()
 {
 	int a[100];
 	int n;
 	cout<<"Nhap vao so phan tu cua mang:  ";
 	cin>> n;
 	nhap_mang(a,n);
 	xuat_mang(a,n);
 /*	for ( int i = 0; i<=n-1; i++)
	{ 
	for (int j= i+1; j<n; j++)
	{
		if (a[i]>a[j])
		{
		   swap (a[i],a[j]);
		  }
		}
	}*/
	sapxep(a,n);
 	cout<<"\n\nCac phan tu sau khi hoan vi la: ";
 	for(int i = 0; i<n; i++)
	   {
		  cout<<a[i]<<"\t";
	}
 	system("pause");
return 0;
 }
