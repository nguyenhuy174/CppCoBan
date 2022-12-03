#include <iostream>
using namespace std;

void Nhap_mang( int a[], int n)
bool KT_PhanTuChan(int a[], int n)
 bool KT = true;
 for (int i =0; i<=n; i++)
 {
 	if (i%2 != 0)
 	KT = False;//cap nhat lai gia su la false

 	break;//dung viec kiem tra lai
 	
}
return KT;

int main ()

{ 
int a[MAX];
int n;
 do
 {
cout << "\nNhap so luong phan tu mang";
cin>> n;
 if ( n<=0 || n > MAX)
  cout << "\nSo luong phan tu mang khong hop le"; 
 }
 while(n<=0|| n > MAX)
 cout <<"\n\n\t\tNhap mang\n";
 Nhap_mang (a,n);
 
 if (KT_PhanTuChan(a,n)== true)
  cout<< "\nMang toan phan tu chan";
  else 
  cout <<"\nMang khong toan phan tu chan";
  system ("pause");
  return 0;
  
 	
 }
	
	
