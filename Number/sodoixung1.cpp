#include <iostream>
using namespace std;

int main ()
{
	int n,m;
	int du, sodao=0;
	cout<< " n= "; cin >> n;
	m=n;
	while ( n > 0)
	{
		du = du%10;
		sodao= sodao*10 + du;
		n=n/10;
		
	}
	if (sodao==m)
	cout <<m<<" la so doi xung"<< endl;
	else
	cout <<m<< " khong la so doi xung\n";
	system ("pause");
	return 0;
}
	
