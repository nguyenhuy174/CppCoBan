#include<iostream>
#include<fstream>
using namespace std;

struct student {
	char ma[5];
	char ten[30];
	float diem;
};
void nhap1hs(student a[], int n, student &hs1) {
	cout << "Nhap ma: ";
	 cin.getline (ma,10);
    cout << "Nhap ho ten: ";
	 cin.getline (hs1.ten,30);
    cout << "Nhap diem: ";
    cin >> hs1.diem;
	cin.ignore();
}
void tieude1() {
	cout << setw(8) << left << "MaHS" << setw(30) << left << "TEN" << setw(13) << right << "DIEM" << endl;
}

void xuat1hs(student &hs1) {
	cout << fixed;
	cout << setprecision(2);//xuat ra diem voi 2 so thap phan sau dua phay
	cout << setw(8) << left << hs1.ma << setw(30) << left << hs1.ten << setw(13) << right << hs1.diem << endl;
}
void nhapds(student a[], int n) {
     for (int i = 0; i<n; i++)	
        {
          cout << "------Nhap thong tin cho hoc sinh thu #" << i+1 << " -------\n";
        	nhap1hs(a,n,a[i]);
        	}
}
void Xuatds(student a[], int n) {
	tieude1();
   for (int i = 0; i < n; i++)
   {
       xuat1hs(a[i]);
	}	    
} 
void ghifile(fstream &f) {
	f.open("hocsinh.txt",ios::out);
	if(!f)
	cout <<"loi file";
	else {
		for(int i =0; i<11; i++)
		f<<n<< " ";
		
	}
	f.close();
}
int main() {
	student a[10];
	int n = 4;
	fstream f;
	
	system("pause");
	return 0;
}
