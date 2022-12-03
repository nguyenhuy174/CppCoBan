#include<iostream>
using namespace std;
//doi chu hoa sang chu thuong

int main() {
	char a;
	cout << "Nhap vao 1 ky tu: ";
	cin >> a;
	if (a >= 'a' && a <= 'z')
	{
		a = a - 32 ;
		}
	else {
	  if (a >= 'A' && a <= 'Z')
	    a = a + 32 ;
	     else
	      a = a;
	}
	cout << "ki tu duoc chuyen la: " << a;
	system("pause");
	return 0;
}
