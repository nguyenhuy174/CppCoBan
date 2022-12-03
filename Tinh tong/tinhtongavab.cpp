#include <iostream>
using namespace std;

int main()
{
    int a, b, s;
    cout << "Nhap a va b\n";
    cin >> a >> b;
    s = a + b;
    if (s < 0)
        cout << "Moi ban nhap lai a va b! ..... ..... ";
    else
        cout << "Tong cua a va b la: " << s << endl;
    ;

    return 0;
}
