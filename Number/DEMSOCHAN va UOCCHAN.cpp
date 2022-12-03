#include <iostream>
#include <cmath>

using namespace std;

int main () {
	int a, b = 0, c, d, demsc = 0, a1, an;
	cout << "Nhap so: ";
	 cin >> a;
	 for ( int i = 1; i <= a; i ++)
	{
		if ( a%i == 0)
		cout << i << "  ";
	}
	cout << endl;
	for (int i = 1; i <= a; i ++)
	{
		if ( a % i ==0 && i%2 == 0)
		 b = b + i;
	}
	cout<<"Tong cac uoc chan la: "<< b;
    cout << endl;
 cout<<"*****BAI TOAN NHAP VAO DAY SO NGUYEN*****\n";
 cout<<"Nhap so dau tien: "; cin >> a1;
 cout<<"Nhap so cuoi cung: "; cin >> an;
 for (int i = a1; i <= an; i++)
  {
 	if ( i % 2 == 0)
 	 cout << i << "  ";
 	}
 for ( int i = a1; i<=an; i++)
 {
 	if ( i % 2 == 0)
 	  demsc++;
	 }
 cout << "\nCo "<< demsc <<" so chan trong day so\n";
 system("pause");
	return 0;
}	
