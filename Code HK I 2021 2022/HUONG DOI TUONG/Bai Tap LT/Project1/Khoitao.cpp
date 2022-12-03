#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void chuoi(int ran)
{
	char a[5] = "S01",
		 b[5] = "S02",
		 c[5] = "S03",
		 d[5] = "S04",
		 e[5] = "S05";
	switch (ran)
	{
	case 1:
		cout << a << endl;
		break;
	case 2:
		cout << b << endl;
		break;
	case 3:
		cout << c << endl;
		break;
	case 4:
		cout << d << endl;
		break;
	case 5:
		cout << e << endl;
		break;
	default:
		cout << "Not display" << endl;
	}
}
int main()
{
	//srand((int)time(0));
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		//cong thuc: min + rand() % (max + 1 - min);
		int ran = 1 + rand() % 5;
	/*	cout << ran << endl;*/
		chuoi(ran);
	}
	system("pause");
	return 0;
}