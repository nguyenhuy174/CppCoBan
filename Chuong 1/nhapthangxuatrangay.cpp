#include<iostream>
#include <cmath>
using namespace std;
int main ()
{
	int m, y, sntt;
	bool nhuan;
	cout<<"Nhap nam: "; cin >> y;
	cout<<"Nhap thang: "; cin >> m;
	nhuan=(y % 400 == 0) || ((y % 4 == 0) && ( y % 100 != 0 ));
	switch (m)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			sntt = 31;
			break;
		case 4: case 6: case 9: case 11:
			sntt = 30;
			break;
		case 2:
			if (nhuan== true)
			sntt= 29;
		else 
		    sntt= 28;
		break;
        		default :
  			 cout <<"Ban nhap thang khong dung :< "<<endl;		  
	}
if ( m >= 1 && m <= 12)
	cout <<"So ngay trong thang "<<m<<" cua nam "<<y<<" la: "<<sntt<<endl;
   return 0;	
}
