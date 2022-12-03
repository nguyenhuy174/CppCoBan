//CAU 1: a)
#include <iostream>
#include<cmath>
using namespace std;

int main () {
	int n;
	float s=0,x;
	do {
		cout << "Nhap n: ";
	   	 cin >> n;
		if(n<=0)
		cout << "Vui long nhap n la so nguyen duong!" << endl;
	} while(n<=0);
	do {
     	cout << "Nhap x: "; cin >> x; 
     	if(x==0)
    	cout << "Nhap lai x!" << endl;
	} while(x==0);
	for(int i = 1; i<=n; i++)
	{
		s=s+ 1.0/(i*(pow(x,i+1)));
	}
	cout << "Tong s = " << s << endl;
	system("pause");
	return 0;
}
