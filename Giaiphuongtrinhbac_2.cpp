#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	float a,b,c,D, e, f;
	
cout <<"Phuong trinh bac 2 co dang: ax^2 + bx + c\n";
cout <<"Nhap he so a, b, c cho phuong trinh:\n ";
       labele://nhãn
cout << "a = ";
 cin >> a;
while (a<0 ){
cout << "He so a khong duoc am! Nhap lai:\n ";
 goto labele; // nhay vê nhãn
}
cout << "b = "; cin >> b;
cout << "c = "; cin >> c;
   D = b*b - 4*a*c;
   e = (-b+sqrt(D))/(2*a);
   f = (-b-sqrt(D))/(2*a);
if( D == 0) {
   cout << "\n\t*Phuong trinh co nghiem kep (-b/2a): "<<-b/(2*a);
   } else {
       if( D < 0) {  
          cout<< "\n\t*Phuong trinh vo nghiem*";
        } else {
		    if ( D > 0) {
              cout << "\n\tPhuong trinh co 2 nghiem phan biet la:\n";
                cout << "X1 = " << e << endl << endl << "X2 = " << f << endl;
            }   
        }
    }
system ("pause");
   return 0;
}
   
   
   
