#include <iostream>

using namespace std;

int main() {
	int s=0, n;
	cout << "Nhap n tinh tong: ";
	 cin >> n;
	 if(n%2 == 0)
	 {
	 	for(int i = 0; i<=n; i++)
	 	{
	 		if(i%2 == 0)
	 		s = s+i;
		 }
	 } else {
	 	for(int j = 0; j<=n-1; j++)
	 	{
	 		if(j%2 == 0)
	 		s = s+j;
		 }	
	 }
cout << "Tong cac so le tu 2 --> n la: " << s << endl;
	system("pause");
	return 0;
}
