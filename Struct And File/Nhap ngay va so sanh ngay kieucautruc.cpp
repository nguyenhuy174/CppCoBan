#include<iostream>
using namespace std;

struct Date {
	int d;
	int m;
	int y;
	};
	
bool namnhuan1(Date d1) {
		if ((d1.y%400==0)||(d1.y%4==0&&d1.y%100!=0))
		    return true;
		       return false;
}
bool namnhuan2(Date d2) {
		if ((d2.y%400==0)||(d2.y%4==0&&d2.y%100!=0))
		    return true;
		       return false;
}
void nhapngay1(Date &d1) {
	//Nhap nam
	cout << "Nhap nam: ";
	do {
	cin >> d1.y;
       if (d1.y<0)
          cout << "Moi nhap lai nam!";
        } while (d1.y<0);
     //Nhap thang
	 cout<<"Nhap thang: ";
	 do {
	 cin >> d1.m;
	   if (d1.m<=0||d1.m>12)
	    cout << "Nhap lai thang!";
		} while (d1.m<=0||d1.m>12);   
	int sntt;
	switch (d1.m) 
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
	      	sntt = 31;
	      	break;
		case 4: case 6: case 9: case 11:
	         sntt = 30;
	         break;
	    case 2:
	    	if (namnhuan1(d1)==true) {
	    		sntt = 29;
	    		} else {
	    			sntt = 28;
	    			}
	    	break;
	    default:
	    	cout << "Nhap thang bi loi!";
	    	break;
}
   //Nhap ngay
   cout << "Nhap ngay: ";
   do {
   	cin >> d1.d;
   	if (d1.d<0||d1.d>sntt)
   	   cout << "Nhap lai ngay!";
   	   } while(d1.d<0||d1.d>sntt);
}   	   
void nhapngay2(Date &d2) {
	//Nhap nam
	cout << "Nhap nam: ";
	do {
	cin >> d2.y;
       if (d2.y<0)
          cout << "Moi nhap lai nam!";
        } while (d2.y<0);
     //Nhap thang
	 cout<<"Nhap thang: ";
	 do {
	 cin >> d2.m;
	   if (d2.m<=0||d2.m>22)
	    cout << "Nhap lai thang!";
		} while (d2.m<=0||d2.m>12);   
	int sntt;
	switch (d2.m) 
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
	      	sntt = 31;
	      	break;
		case 4: case 6: case 9: case 11:
	         sntt = 30;
	         break;
	    case 2:
	    	if (namnhuan2(d2)==true) {
	    		sntt = 29;
	    		} else {
	    			sntt = 28;
	    			}
	    	break;
	    default:
	    	cout << "Nhap thang bi loi!";
	    	break;
}
   //Nhap ngay
   cout << "Nhap ngay: ";
   do {
   	cin >> d2.d;
   	if (d2.d<0||d2.d>sntt)
   	   cout << "Nhap lai ngay!";
   	   } while(d2.d<0||d2.d>sntt);
}   	   
int check(Date d1, Date d2) {
	if (d1.y==d2.y) {
		if(d1.m>d2.m) {
			return 1;
			} else {
				if (d1.m<d2.m) {
					return -1;
					} else {
						if (d1.m==d2.m) {
							if (d1.d>d2.d) {
								return 1;
								} else {
									if (d1.d<d1.d) {
										return -1;
										} else {
											return 0;
										}
									}
								}
							}
						}
					}
																								
	else {
		if (d1.y>d2.y) {
			return 1;
			} else {
				return -1;
				}
        } 
}				
		
	
int main () {
Date d1,d2;
nhapngay1(d1);
nhapngay2(d2);
cout << check(d1,d2);
cout << endl;
system("pause");
return 0;
}
