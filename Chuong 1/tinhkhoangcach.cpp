#include <iostream>
#include <cmath>
using namespace std;

int main () {
	float a, b, c, d, x, y, z, D;
  cout <<"Nhap toa do mot diem: ";
   cin >> x >> y >> z;
  cout << "Nhap he so pt mp: ";
   cin >> a >> b >> c >> d;
D = fabs(a*x+b*y+c*z+d)/sqrt(a*a+b*b+c*c);
  cout << "Khoang cach tu diem vua nhap den mp la: " << D << endl;
system("pause");
return 0;

}
