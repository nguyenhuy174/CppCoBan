//Mang dong --- cap phat dong la dung bao nhieu xin cap phát bay nhieu
#include<iostream>
#include<string>
using namespace std;
void capphat(int *&a, int n)
{
	a = new int[n];
}
void nhap(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu #" << i << ": ";
		cin >> *(a + i);//cin>>a[i]
	}
}
void xuat(int *a, int n)
{
	for (int i = 0; i < n; i++)
		cout << *(a + i)<<" ";//*(a+i) <--> a[i]

}
bool KTNT(int n)
{
	if (n < 2)
		return false;
	for (int i = 2; i < n;i++)
	if (n%i == 0)
		return false;
	return true;
}
int demSoNT(int *a, int n)
{
	int dem = 0; 
	for (int i = 0; i < n;i++)
	if (KTNT(*(a + i)) == true)
		dem++;
	return dem;
}
// xoa cac phan tu trung nhau, chi giu lai mot phan tu
/*void Xoatrung(int *p,int &n){
	int j;
   	for (int i=0;i<n-1;i++){
    	j=i+1;
    	while (j<n)
      		if (*(p+i)==*(p+j)){
         		for (int k=j; k<n-1;k++) {
         			*(p+k)=*(p+k+1);
				}
				n--; 
      		} else {
      			j=j+1;
			} 
   }
}
void XoaPhanTu(int a[], int n, int pos){
    if(n <= 0){
        return;
    }
    if(pos < 0){
        pos = 0;
    }
    else if(pos >= n){
        pos = n-1;
    }
    for(int i = pos; i < n - 1; i++){
        a[i] = a[i+1];
    }
    --n;
}*/
void xoa(int *&a, int n, int vt) {
	for(int i = vt; i<n-1; i++)
	{
		*(a+i) = *(a+i+1); //dich chuyen
		n--;
	}
	int *temp = new int [n];
	// sao chep tu a cho temp
	for(int i=0; i<n; i++) 
	{
		*(temp+i) = *(a+i);		
	}
	delete[] a; //giai phong a
	a = new int [n];
	//sao chep tu temp qua a
    for(int i=0; i<n; i++) 
	{
		*(a+i) = *(temp+i);
	}
	delete[] temp;	
}
void xoatrung(int *&a, int &n) {
	for(int i = 0; i<n-1; i++)
	{
		for(int j = i+1; j<n; j++)
		{
			if(*(a+i)==*(a+j))
			{
				xoa(a,n,j);
				j--;
			}
		}
	}
}
void xoasoNT(int *&a, int &n) // gia su da viet ham KTNT()
{
	for(int i=0; i<n; i++)
	{
		if(KTNT(*(a+i)))
		{
			xoa(a,n,i);
			i--;
		}
	
	}
}
int main()
{
	int *a;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	capphat(a, n);
	nhap(a, n);
	xuat(a, n);
	cout << "\nSo luong so nguyen to: " << demSoNT(a, n) << endl;
	xoa(a,n,3);
	xuat(a,n);
	delete[] a;
	cout << endl;
	system("pause");
	return 0;
}
