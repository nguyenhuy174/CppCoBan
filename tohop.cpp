#include <iostream>
using namespace std;

int c(int n, int k)
{
    if(k == 0 || k == n)
        return 1;
    return c(n-1,k) + c(n-1,k-1);
}
int main() 
{
	int k, n;
	cout << "Nhap k: ";
	cin >> k;
	cout << "Nhap n: ";
	cin >> n;
    cout << "To hop chap " << k <<" cua " << n <<" la: " << c(n,k);
    cout << endl;
	system("pause");
	return 0;
}
