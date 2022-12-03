#include <iostream>
using namespace std;

int main ()
{
	int n= 123;
	int du;
	du= n % 10;
	cout << "du= "<<du<<endl;
	cout <<"n = "<<n<<endl;
	n= n/10;
	cout << "Sau chia n = "<<n<<endl;
	du= n%10;
	cout<< "du = "<<du<< endl;
	

	

	system("pause");
	return 0;
}
