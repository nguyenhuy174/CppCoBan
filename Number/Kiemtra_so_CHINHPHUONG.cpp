#include <iostream>
using namespace std;

int main ()
{
	int n;
	bool ch = false;

	do {
		cout << "Nhap n: ";
		cin >> n;
		if(n <= 0)
		cout << "Ban nhap sai. Moi ban nhap lai! " << endl;	
	}
	while (n <= 0);
	for (int i = 1;i <= n;i++)
	{ 
	   if (i*i == n)
	  {
     	ch = true;
	      break;
        }
	}
	if (ch == true)
	cout << n <<" la so CP" << endl;
else
	cout << n << " ko phai la so CP " << endl;
	system("pause");
	return 0;
	
}
