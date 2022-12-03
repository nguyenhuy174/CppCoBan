#include<iostream>
#include<fstream>
using namespace std;
//kieu nhi phan
void ghifile(fstream &f) {
	f.open("baitap1.txt",ios::out|ios::binary);
	if(!f)
	cout <<"loi file";
	else {
		for(int i =0; i<11; i=i+2)
		f.write(reinterpret_cast<char*> (&i),sizeof(i));
   }
   f.close();
}
void docfile(fstream &f) {
			int n;
	f.open("baitap1.txt",ios::in|ios::binary);
	if(!f)
	cout << "Loi file";
	else {
		while(f.read(reinterpret_cast<char*> (&n),sizeof(n)));
		cout << n<<endl;
	}
f.close();
}
void ghifile(fstream &f) {
	f.open("baitap.txt",ios::out);
	if(!f)
	cout <<"loi file";
	else {
		for(int i =0; i<11; i++)
		f<<n<< " ";
		
	}
	f.close();
}
void docfile(fstream &f) {
			int n;
	f.open("baitap.txt",ios::in);
	if(!f)
	cout << "Loi file";
	else {
		while(f>>n);
		cout << n<<endl;
	}
f.close();
}
int main () {
/*	docfile(f);
	ghiflie(f);
	fstream f;//khai bao
	f.open("vidu.txt", ios::out|ios::binary); // mo file
	fstream fi("baitap.txt", ios::in); // cac thao tac voi file
	f.close();
	
	fstream f;
	f.open("vidu.txt", ios::out);
	if(!f)
	cout << "loi file";
	else {
		int n;
		cout << "Nhap n: ";
		cin >> n;
		f << n;
	}
		f.close();
		fstream fi;
		fi.open("vidu.txt", ios::in);
		if(!fi)
		cout <<"loifile";
		else {
			int n;
			while(fi>>n)
			cout <<n<<endl;
		}
		fi.close(); */  
system('pause');
return 0;
}
