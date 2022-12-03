#include<iostream>
using namespace std;

int main() {
	int km, m = 0;
	cout << "Nhap so km di duoc: "; cin >> km;
	if(km==1)
	{
		m+=15000;
	} else {
		if(km>=2 && km<=5) 
		{
		m = 15000 + (km-1)*13500;
	    } else {
		   if(km>=6 && km<=120)
		   {
			  m = 15000 + 4*13500 +(km-5)*11000;
		    } else {
			   m = (15000 + 4*13500 +(km-5)*11000)*90/100;
		}
	}
}
cout << "So tien TAXI phai tra la: " << m << endl;
system("pause");
return 0;
}
