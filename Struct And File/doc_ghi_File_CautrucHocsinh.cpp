#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

struct Hocsinh {
	char ma[5];
	char hoten[30];
	char namsinh[11];
	char gioi[4];
	float t, l, h, tong;
	};

void nhap1hs(Hocsinh &hs1) {
	cout << "Nhap ma: ";
	 cin.getline (hs1.ma,5);
	cout << "Nhap ho ten: ";
	 cin.getline (hs1.hoten,30);
	cout << "Nhap ngay thang nam sinh: ";
	 cin.getline (hs1.namsinh,11);
	cout << "Nhap gioi tinh: ";
	 cin.getline (hs1.gioi,4); 
	cout << "Nhap diem Toan: "; cin >> hs1.t;
	cout << "Nhap diem Ly: "; cin >> hs1.l;
	cout << "Nhap diem Hoa: "; cin >> hs1.h;
	hs1.tong = hs1.t + hs1.l + hs1.h;
	cin.ignore();
}
/*void nhapds(Hocsinh a[], int n) {
     for (int i = 0; i<n; i++)	
        {
          cout << "------Nhap thong tin cho hoc sinh thu #" << i+1 << " -------\n";
        	nhap1hs(a,n,a[i]);
        	}
}*/
void tieude() {
	cout << setw(8) << left << "MaHS" << setw(30) << left << "HO TEN" << setw(12) << right << "NGAY SINH" << setw(12) << right << "GIOI TINH"
	     << setw(13) << right << "DIEM TOAN" << setw(13) << right << "DIEM LY" << setw(13) << right << "DIEM HOA"
	     << setw(13) << right << "TONG DIEM" << endl;
}
void ghifilehs(fstream &f, int n) {
	Hocsinh hs1;
	f.open("hocsinh1.txt", ios::out);
	if(!f)
	cout << "Error file";
	else {
		for(int i=0; i<n; i++)
		{
			cout << "------Nhap thong tin cho hoc sinh thu #" << i+1 << " -------\n";
		    nhap1hs(hs1);
		f << hs1.ma	<< "," << hs1.hoten << "," << hs1.namsinh << "," << hs1. gioi
		  << "," << hs1.t << "," << hs1.l << "," << hs1.h << "," << hs1.tong << endl;				
	    }
	  f.close();
    }
}  
void docfile(fstream &f, Hocsinh a[], int &n)
{
	char k;
	f.open("hocsinh1.txt", ios::in);
	if(!f)
	 cout << "Error file";
	 else {
	 	n = 0;
	 	while(!f.eof())
	 	{
	 		f.getline(a[n].ma,5,',');
	 		f.getline(a[n].hoten,30,',');
	 		f.getline(a[n].namsinh,11,',');
	 		f.getline(a[n].gioi,4,',');
	 		 f >> a[n].t;
	 		f.get(k);
	 	 	 f >> a[n].l;
	 		f.get(k);
	 		 f >> a[n].h;
	 		f.get(k);
	 		 f >> a[n].tong;
	 		f.get(k);
	 		if(f.eof())
	 		break;
	 		n++;
		 }
	 }
	 f.close();
}
void xuatmang(Hocsinh a[], int n) {
	tieude();
	for(int i = 0; i < n; i++)
	{
			cout << setw(8) << left << a[i].ma << setw(30) << left << a[i].hoten << setw(12) << right << a[i].namsinh
		     << setw(12) << right << a[i].gioi << setw(13) << right << a[i].t << setw(13) << right << a[i].l << setw(13) << right
		     << a[i].h << setw(13) << right << a[i].tong << endl;
	}
}
void hoanvi(Hocsinh &x, Hocsinh &y) {
	Hocsinh t;
	t = x;
	x = y;
	y = t;
}
void sapxepdiemtongtangdan(Hocsinh a[], int n) {
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(a[i].tong>a[j].tong)
			hoanvi(a[i],a[j]);
		}
	}
}
void ghifiledanhsachtangdan(fstream &f, Hocsinh a[], int n) {
	f.open("dshstangdan.txt", ios::out);
	if(!f)
	cout << "Error file";
	else
	{
		for(int i=0; i<n; i++)
		f << a[i].ma	<< "," << a[i].hoten << "," << a[i].namsinh << "," << a[i]. gioi
		  << "," << a[i].t << "," << a[i].l << "," << a[i].h << "," << a[i].tong << endl;
	}
	f.close();
}
int main() {
	Hocsinh a[10];
	fstream f;
	int n = 3;
//	ghifilehs(f,n);
	docfile(f,a,n);
	xuatmang(a,n);//luc nay, du lieu da co tren mang
	sapxepdiemtongtangdan(a,n);
	cout << endl;
	cout << "-------Danh sach hoc sinh tang dan------";
	cout << endl;
	xuatmang(a,n);
//	ghifiledanhsachtangdan(f,a,n);
	cout << endl;
	system("pause");
	return 0;
}
