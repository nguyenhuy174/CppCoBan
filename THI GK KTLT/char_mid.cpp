#include <iostream>
#include <cstring>
using namespace std;


char *mid(char *s, int pos, int len) {
	char *pch;
	pch = new char[len + 1];
	strncpy(pch,s + pos,len);
	*(pch + len) = '\0';
	return pch;
}
int main() {
	char s[100]= "Nguyen Ngoc Huy";
	cout << mid(s,7,4) << endl;
	system("pause");
	return 0;
}
