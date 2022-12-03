#include <iostream>
using namespace std;
void nhap_mang(int a[], int n)
 {
 	for (int i = 0; i<n; i++)
	 {
	 cout <<"Phan tu thu a[" << i << "]: ";
	 cin >> a[i];
    }
   
 }
void xuatmang(int a[], int &n) {
	for (int i = 0; i<n; i++)
	 {
	 	cout << a[i] << " \t"; 
	 }
}
void xoa(int a[], int &n, int vt) {  //vt la vi tri can xoa
   if (vt >= 0 && vt < n)
   { 
    for (int i = vt; i < n-1; i++)
    {
     a[i] = a[i+1];
     } 
     --n;
  }
}
void them(int a[], int &n, int pos, int vlue)
{
	if(pos >= 0 && pos < n)
	{
 for(int i = n; i > pos; i--)
    {
        a[i] = a[i-1];
    }
    a[pos] = vlue;
    ++n;
    }
}
 int main() {
 	int a[100];
	int n, vt, pos, vlue;
	cout<<"Nhap so phan tu cua mang: "; 
	 cin >> n; 
	cout << endl;
	nhap_mang(a,n);
    xuatmang(a,n);     
    cout << "\nNhap vao vi tri can xoa trong mang: ";
     cin >> vt;    
	xoa(a,n,vt);
	xuatmang(a,n);
	cout << endl;
    cout << "Nhap vao vi tri can them: ";
	  cin >> pos;
	cout << "Nhap vao gia tri them vao: ";
	cin >> vlue;
	them(a,n,pos,vlue);
    xuatmang(a,n);
    cout << endl;
	system("pause");
return 0;
}

