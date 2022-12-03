#include <iostream>
using namespace std;
void Nhap_mang2c (int a[][50], int m, int n){
	for ( int i =0 ; i<m; i++)
	{
	 for ( int j=0; j<n; j++)
	{
	  cout<<"a["<<i<<"]["<<j<<"]= ";
	  cin>> a[i][j];
	}}
}
void xuat_mang2c (int a[][50], int m , int n){
	for ( int i = 0 ; i<m; i++)
	 {
	 for ( int j=0; j<n; j++)
	 {
	 cout << a[i][j]<<"\t";
	 }
	  cout<<endl;
	  }
}
int main(){
	 int a[50][50];
	 int m, n,x,z;
	 cout<<"Nhap vao so hang: "; cin >> m;
	 cout<<"Nhap vao so cot: "; cin>> n;
	 cout<<"__________Nhap vao ma tran__________\n\n";
	 Nhap_mang2c( a,m,n);
	 xuat_mang2c ( a,m,n);
	   cout<<"Nhap vao so hang: "; cin >> x;
	   cout<<"Nhap vao so cot: "; cin>> z;
	   cout<<"__________Nhap vao ma tran thu 2__________\n\n";
	 Nhap_mang2c (a,x,z);
	 xuat_mang2c ( a,x,z);
	 if ( n==x)
	  {
	  cout<<"2 ma tran co the nhan nhau duoc\n";
	  cout<<"kich co cua ma tran sau khi nhan se la: "<<m<<"x"<<z;
}
else
cout<<" 2 ma tran khong the nhan nhau duoc!";
	 

	
	return 0;
	
	}
