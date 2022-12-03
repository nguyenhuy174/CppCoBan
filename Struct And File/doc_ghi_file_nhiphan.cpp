#include <iostream>
#include <cstring>
#include <cstdlib>
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
void ghifile_np(fstream &f, int n) {
	Hocsinh hs1;
	f.open("danhsachhs.dat", ios::out|ios::binary);
	if(!f)
	cout << "Error file" << endl;
	else {
		for(int i=0; i<n; i++)
		{
		    nhap1hs(hs1);
	        f.write(reinterpret_cast<char*>(&hs1), sizeof(hs1));
	    }
    }
    f.close();
}  

void docfile(fstream &f, Hocsinh a[], int &n)
{
	f.open("danhsachhs.dat", ios::in|ios::binary);
	if(!f)
	 cout << "Error file";
	 else {
	 	n = 0;
	 	while(f.read(reinterpret_cast<char*>(&a[n]),sizeof(a[n])));
	 	{
			n++;
		}	 
	 }
	 f.close();
}
void xuatmang(Hocsinh a[], int n) {
	for(int i = 0; i < n; i++)
	{
		cout << a[i].ma << " " << a[i].hoten << " " << a[i].namsinh
		     << " " << a[i].gioi << " " << a[i].t << " " << a[i].l << " "
		     << a[i].h << " " << a[i].tong << endl;
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
	f.open("dshstangdan.dat", ios::out|ios::binary);
	if(!f)
	cout << "Error file";
	else
	{
		for(int i=0; i<n; i++)
	       f.write(reinterpret_cast<char*>(&a[i]),sizeof(a[i]));
	}
	f.close();
}

int main() {
	Hocsinh a[10];
	fstream f;
	int n = 3;
  // ghifile_np(f,n);
   docfile(f,a,n);
   xuatmang(a,n);
   sapxepdiemtongtangdan(a,n);
	cout << endl;
	system("pause");
	return 0;
}
/*void docfile(fstream &f, Hocsinh a[], int &n)
{
	char s[100];
	f.open("hocsinh1.txt", ios::in);
	if(!f)
	 cout << "Error file";
	 else {
	 	n = 0;
	 	while(f.getline(s,100))
	 	{
	 		char *p;
	 		p= strtok(s, ",");// ham tach chuoi
	 		if(p!= NULL)
	 		{
	 			strcpy(a[n].ma,p);
	 			p=strtok(NULL,",");
	 			strcpy(a[n].hoten,p);
	 			p=strtok(NULL,",");
	 			strcpy(a[n].namsinh,p);
	 			p=strtok(NULL,",");
	 			strcpy(a[n].gioi,p);
	 			p=strtok(NULL,",");
	 			a[n].t = atof(p);//ham chuyen chuoi ki tu thanh so thuc
	 			p=strtok(NULL,",");
	 			a[n].l = atof(p);//ham chuyen chuoi ki tu thanh so thuc
	 			p=strtok(NULL,",");
	 			a[n].h = atof(p);//ham chuyen chuoi ki tu thanh so thuc
	 			p=strtok(NULL,",");
	 			a[n].tong = atof(p);//ham chuyen chuoi ki tu thanh so thuc
	 			p=strtok(NULL,",");
			 }	 		
	 		n++;
		 }    
	 }
	 f.close();
}*/
