#include <iostream>
//#include <iomanip>
#include <cstring>
#include <fstream>

using namespace std;
struct TIME {
	int h;
	int min;
};
struct DATE {
	int d;
	int m;
	int y;
	};
struct AIR {
	char ma[5];	
	DATE ngaybay;
	TIME giobay;
	char noidi[20];
	char noiden[20]; 
    };
int search(AIR a[], int n, char mat[])
{
	for (int i = 0; i < n; i++)
		if (strcmp(a[i].ma, mat) == 0)
			return i;			
	return -1;
}
void nhap1chuyenbay(AIR a[], int n, AIR &a1)
{
	char mat[5];
	int k;
	do
	{

		cout << "Nhap Ma: "; cin.getline(mat, 5);
	
		k = search(a, n, mat);
		if (k != -1)
			cout << "Ma Trung! Vui Long Nhap Lai!" << endl;
	} while (k != -1);
	strcpy(a1.ma, mat);
	cout << "Nhap ngay bay: ";
    	cin >> a1.ngaybay.d >> a1.ngaybay.m >> a1.ngaybay.y;
	cout << "Nhap gio bay: ";
    	cin >> a1.giobay.h >> a1.giobay.min;
	cout << "Nhap noi di: "; cin.getline(a1.noidi, 20);

	cout << "Nhap noi den: "; cin.getline(a1.noiden, 20);
cin.ignore();
}
void nhapdschuyenbay(AIR a[], int n) {
     for (int i = 0; i<n; i++)	
        {
          cout << "------Nhap thong tin cho chuyen bay thu #" << i+1 << " -------\n";
        	nhap1chuyenbay(a,n,a[i]);
        	}
}
// kiem tra file da ton tai hay chua
bool checkfile(char filename[]) {
	fstream f(filename);
	return f.good();
}
void ghifile_np(fstream &f, int n) {
	AIR a[10];
	checkfile("dschuyenbay.dat");
	if(f.good())
	{
		f.open("dschuyenbay.dat", ios::app|ios::binary);
		if(!f)
        	cout << "Error file" << endl;
    	else {
    		AIR a1;
		    nhapdschuyenbay(a,n);
	        f.write(reinterpret_cast<char*>(&a1), sizeof(a1));
	
    }
    f.close();
  }
  else
  {
  		f.open("dschuyenbay.dat", ios::out|ios::binary);
		if(!f)
        	cout << "Error file" << endl;
    	else {
    		AIR a1;
		    nhapdschuyenbay(a,n);
	        f.write(reinterpret_cast<char*>(&a1), sizeof(a1));   
	    }
    f.close();
	}  

}  
int main () {
	fstream f;
	int n = 3;
	ghifile_np(f,n);
	
	system("pause");
	return 0;
}
