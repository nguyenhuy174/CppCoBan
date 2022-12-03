#include<iostream>
using namespace std;

int main() {
	float t, l ,h ,dtb;
	cout << "Nhap diem Toan: "; cin >> t;
	cout << "Nhap diem Ly: "; cin >> l;
	cout << "Nhap diem Hoa: "; cin >> h;
   dtb = (t + l + h)/3;
    cout << "Diem trung binh cua 3 mon la: " << dtb << endl;
    cout << "XEP LOAI: ";
  if(dtb ==10)
  {
  	cout << "XUAT SAC";
  } else {
  	if(dtb>=0 && dtb<5)
  	{
  		cout << "KEM";
	  } else {
	  	if(dtb>=5 && dtb<7)
	  	{
	  		cout << "TRUNG BINH";
		  } else {		  			  			  		
			if(dtb>=8 && dtb<10)	    	
			  	{
			  		cout << "GIOI";
				  } else {
				  	if(dtb>=7 && dtb<8 && (t<5 || l<5 || h<5))
				  	{
				  		cout << "TRUNG BINH";
					  } else {
					  	cout << "KHA";
					  }
				  }
			  }
		  }
	  }
cout << endl;
system("pause");
return 0;
}
