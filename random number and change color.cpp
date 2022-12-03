#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

void set_color(int code) {
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(color, code);
}
int main() {
	srand(time(NULL));
	for (int i = 0; ; i++)
	{
		int a = rand() % 2;// min + rand() % (max + 1 - min)
		int k = 2 + rand() % 6;
			set_color(k);
			cout << a;		
	}
	system("pause");
	return 0;
}
