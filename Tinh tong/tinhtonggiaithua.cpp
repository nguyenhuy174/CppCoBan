#include <iostream>
using namespace std;

int main ()
{
	int n, p = 0, tich = 1;
	cout << "Nhap n: ";
	 cin >> n;
	for (int i = 1;i <= n; i++)
   { 
       tich=tich*i;
       p = p + tich;
    }
      
  cout <<"tong la: "<<p<<endl;
  system ("pause");
  return 0;
}
  
