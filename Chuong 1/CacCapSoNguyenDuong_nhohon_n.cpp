#include<iostream>
using namespace std;

int main() {
	int a, b, n;
	cout << "Nhap n: ";
	 cin >> n;
do {
	cout << "Nhap a: ";
	cin >> a;
	if(a<=0 || a>n)
	cout << "Nhap lai a!";
} while(a<=0 || a>n);
do {
	cout << "Nhap b: ";
	cin >> b;
	if(b<=0 || b>n)
	cout << "Nhap lai b!";
} while(b<=0 || b>n);
 cout << "Cac cap so nguyen duong nho hon n:";
	for(int i = 1; i<n; i++)
	{
		for(int j = 1; j<n; j++)
		{
			if((i+j)%a == 0 && (i+j)%b != 0)
			 {
			 cout << i << "\t" << j;
                }
		}
	}

	cout << endl;
	system("pause");
	return 0;
}
