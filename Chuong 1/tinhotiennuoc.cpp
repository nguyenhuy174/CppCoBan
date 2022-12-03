#include <iostream>
using namespace std;
int main()
{
	int a;
	float s;
	
	cout<<"Nhap so khoi nuoc: ";
	cin>>a;
	  if ( a==4)
	  s=4400;
	  if(a==6)
	  s=4400 + 8300;
	  if ( a>=7)
	 
	  s= 4400+8300+ (a-6)*10500;
cout<<"Tong so tien nuoc la: "<<s+s*0.05+s*0.1<<endl;
system("pause");
return 0;
}
	
	
