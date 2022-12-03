#include <iostream>

using namespace std;

int main() {
	int a ,b, n;
	cout << "Nhap n: ";
	 cin >> n;
	do {
		cout << "Nhap a: ";
		cin >> a;
		cout << "Nhap b: ";
		cin >> b;
		if(a>n || b>n)
		cout << "Nhap lai a, b @@" << endl;
	} while(a>n || b>n);
	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j<n; j++)
		{
			if((i+j)%a ==0 && (i+j)%b != 0)
			cout << "(" << i << "," << j << ")" << "  ";
		}
	}
	system("pause");
	return 0;
}
