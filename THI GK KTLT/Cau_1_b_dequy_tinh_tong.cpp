//CAU 1: b)
#include <iostream>
#include<cmath>
using namespace std;
float tong(int n,float x)
{
	if(n==0) 
	 return 0;
	else 
	 return 1.0/(n*pow(x,n+1))+tong(n-1,x);
}
int main () {
	int n;
	float x;
	do {
		cout << "Nhap n: ";
	   	 cin >> n;
		if(n<=0)
		cout << "Vui long nhap n la so nguyen duong!" << endl;
	} while(n<=0);
	cout << "Nhap x: "; cin >> x;// nho kiem tra n <= 0 va x=0 
   cout << tong(n,x) << endl;
   system("pause");
   return 0;
}
