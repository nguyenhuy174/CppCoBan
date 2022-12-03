#include <iostream>
#include <algorithm>// lenh swap nam trong thu vien nay @@
using namespace std;

void hoanvi( int&a, int&b){
	int c=a;
	   a=b;
	   b=c;
	   }
int main () {
	int a, b;
	cout<<"Nhap vao a: ";
	 cin>>a;
	cout<<"Nhap vao b: ";
 	 cin >> b;
	cout<<"\n\nSo a, b vua nhap la: ";
	cout<<"\na = "<<a;
	cout<<"\nb = "<<b;
	
	swap(a,b);
	cout<<"\n\nSo a, b sau khi hoan vi la: ";
	cout<<"\na = "<<a;
	cout<<"\nb = "<<b;
return 0;
}
	
	
