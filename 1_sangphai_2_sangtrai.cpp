#include <iostream>
using namespace std;


int main() {
	int n, count1 = 0, count2 = 0, a1;
	cout << "Input your step! (n): ";
	cin >> n;
	for(int i = 0; i<n; i++)
	{
		do {
		cout << "Left(2)/Right(1): ";
		cin >> a1;
		} while(a1<1 || a1>2);			
		if(a1 == 1)
		{
			count1 ++;
		} else {
			if(a1==2)
			count2 --;
		}		
	}
	cout << "Khoang cach so voi vi tri ban dau la: " << count1 + count2 << " meter";
	cout << endl;
	system("pause");
	return 0;
}
