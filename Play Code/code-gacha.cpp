#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
using namespace std;

char nv1[] = "Keqing",
	 nv2[] = "Qiqi",
	 nv3[] = "Mona",
	 nv4[] = "Diluc",
	 nv5[] = "Jean";
int main()
{
	tryAgain: //nhan
	int a;
	do
	{
		cout << "\t1 OR 0: ";
		cin >> a;
		if(a<0||a>1)
			cout << "\n\tChoose Again!" << endl;	
	} while(a<0||a>1);
	srand(time(NULL));
	int r = rand() % 2;
	if(r==a)
		cout << "\n\tWin 50/50" << endl;
	else {
		cout << "\n\tLose 50/50: " << endl;
		int nv = 1 + rand() % 5;
		if (nv == 1)
			cout << nv1 << endl;
		if (nv == 2)
			cout << nv2 << endl;
		if (nv == 3)
			cout << nv3 << endl;
		if (nv == 4)
			cout << nv4 << endl;
		if (nv == 5)
			cout << nv5 << endl;
		}

	system("pause");	
	goto tryAgain;	
	return 0;
}
