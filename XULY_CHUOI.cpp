#include <iostream>
#include <string.h>
using namespace std;

void xoatrai(char s[]) { // khoang trang ben trai
while(s[0] == ' ')
  strcpy(&s[0],&s[1]);

}
void xoaphai(char s[]) {  // khoang trang ben phai
while(s[strlen(s)-1] == ' ')
 s[strlen(s)-1] = '\0';

}
void xoagiua(char s[]) {
	for(int i = 0; i < strlen(s)-1; i++)
	{
		if(s[i] == ' ' && s[i+1] == ' ')
		{
			strcpy(&s[i],&s[i+1]);
			i--;			
		}
	}
}
void kitudauhoa(char s[]) {
	s[0] = s[0] - 32;
	int l = strlen(s);
	for(int i = 0; i < l-1; i++)
	{
		if(s[i] == ' ' && s[i+1] != ' ')
		  s[i+1] = s[i+1] - 32;
	}
}
int dodai(char s[]) {
	int i = 0;
	while(s[i] != '\0')
	i++;
	return i;
}
void chuhoa(char s[]) {
	int l1 = dodai(s);
	for(int i = 0; i<l1; i++)
	{
		if(s[i] >= 'a' && s[i] <= 'z')
		  s[i] = s[i] - 32;
	}
}
void chuthuong(char s[]) {
	int l1 = dodai(s);
	for(int i = 0; i<l1; i++) 
	{
		if(s[i] >= 'A' && s[i] <= 'Z')
		 s[i] = s[i] + 32;
	}
}
/*char xoakt(char s[100], char x)
{
    int i, j;
    int n= strlen(s);
    for(i=0; i<n; i++)
    {
        if(s[i]== x)
        {
            for(j=i; j<n; j++)
            {
                s[j]= s[j+1];
                s[n]='\0';
                i--;
            }
        }
    }
}*/
char *XoaKyTu(char *s, int pos, char x)
{
	 int i, j;
    int n = strlen(s);
    for(i=pos; i<n; i++)
    {
        if(s[i]== x)
        {
            for(j=i; j<n; j++)
            {
                s[j]= s[j+1];
                s[n]='\0';
            }
        }
    }
    return s;
}
int main () {
	char s[100], x;
	cin.getline(s,100);
	xoatrai(s);
    xoaphai(s);
 //   xoagiua(s);
	//chuhoa(s);
//	chuthuong(s);
//	kitudauhoa(s);
	cout << s;
	cout << endl;
	cout << "Nhap vao ki tu can xoa: ";
	cin >> x;
	cout << XoaKyTu(s,2,x) << endl;

	system ("pause");
	return 0;
}
	/* xoa giua
	void xoagiua (char[], int pos, int len)
	 s+ pos, s+ pos + len
	
	int i=0;
	while ( s[i]!= '\0')
	i ++;
	return i; */
