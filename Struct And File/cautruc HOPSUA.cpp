#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

struct NGAY {
	int d;
	int m;
	int y;
	};
struct Hopsua {
	char ma[5];
	char nhanhieu[20];
    float weight;
    NGAY date;
    };
void nhapngay(NGAY &d1) {
   cin >> d1.d >> d1.m >> d1.y;	
}

void nhap1hopsua(Hopsua a[], int n, Hopsua &hop1) {
	NGAY d1;
	cout << "Nhap ma: ";
	 cin.getline (hop1.ma,5);
	cout << "Nhan hieu: ";
	 cin.getline (hop1.nhanhieu,20);
	cout << "Trong luong: "; cin >> hop1.weight;
	cout << "Han su dung: ";
	 cin >> hop1.date.d >> hop1.date.m >> hop1.date.y;	
     cin.ignore();  
}
void title() {  //hàm tiêu de
	cout << setw(6) << left << "MA" << setw(20) << left << "NHAN HIEU" << setw(5) << right << "TRONG LUONG"
	     <<setw(13) << right << "HAN SU DUNG" << endl;
}	
void xuat1hopsua(Hopsua hop1) {
	cout << fixed; // ko có hàm này se bi loi khi xuat weight co 2 so sau dau phay
	cout << setprecision(2);// xuat ra trong luong voi 2 so thap phan
	cout << setw(6) << left << hop1.ma << setw(20) << left << hop1.nhanhieu << setw(5) << right << hop1.weight
	     <<setw(10) << right << hop1.date.d << "/" << hop1.date.m << "/" << hop1.date.y << endl;
}
void nhapdshopsua(Hopsua a[], int n) {
     for (int i = 0; i<n; i++)	
        {
          cout << "------Nhap thong tin cho hop sua thu " << i+1 << " -------\n";
        	nhap1hopsua(a,n,a[i]);
        	}
}
void xuatdshopsua(Hopsua a[], int n) {
	title();
   for (int i = 0; i < n; i++)
   {
       xuat1hopsua(a[i]);
	}	    
} 
//tìm hôp sua có trong luong lon nhat
void trongluongmax(Hopsua a[], int n) {
	float maxweight = a[0].weight;
	int max = 0;
	for (int i = 1; i < n; i++) 
	{ 
	   if(a[i].weight > a[0].weight) {
	   	  maxweight = a[i].weight;
	     	max=i;
	   	}
	}
	 cout << "------Hop sua co trong luong lon nhat: " << endl;
	 title();
	   xuat1hopsua(a[max]);
	for (int i = 1; i < n; i++) 
	{ 
	   if(a[i].weight == maxweight) {      
            xuat1hopsua(a[i]);
        }
    }
} 
int sosanhngay(NGAY d1, NGAY d2) {
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
void xuatds_hopsua_hethan(Hopsua a[], int n) {
	NGAY d1;
	cout << "NHAP NGAY HIEN TAI: ";
	 nhapngay(d1);
	cout << "___DANH SACH HOP SUA DA HET HAN SU DUNG___" << endl;
	title();
	for(int i = 0; i < n; i++)
	{
		if(sosanhngay(d1,a[i].date) == 1)
		{
			xuat1hopsua(a[i]);
			}
	    }
}
int main () {
	Hopsua a[10];
	int n = 4;
	Hopsua hop1;
  // cout << sosanhngay({21,5,2020},{21,5,2020});
nhapdshopsua(a,n);
xuatdshopsua(a,n);
trongluongmax(a,n);
xuatds_hopsua_hethan(a,n);
system("pause");
return 0;
}


