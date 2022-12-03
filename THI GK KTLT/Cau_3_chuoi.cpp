#include <bits/stdc++.h>
using namespace std;
char *mid(char *s, int pos, int len)
{
    char *ss = new char;
    int o = 0;
    for (int i = pos; i < pos + len; i++)
    {
        ss[o] = s[i];
        o++;
    }
    ss[o] = '\0';
    return ss;
}
int main()
{
    char s[1000];
    cout << "Nhap chuoi: ";
    gets(s);
    cout << "\nNhap vi tri: ";
    int pos, len;
    cin >> pos;
    cout << "\nNhap do dai: ";
    cin >> len;
    char *ss = mid(s, pos, len);
    for (int i = 0; i < strlen(ss); i++)
        cout << ss[i];
    return 0;
}
