#include <iostream>
using namespace std;

void capphat(int **&a, int n)
{
	a = new int *[n];
	for (int i = 0; i < n; i++)
	{
		*(a + i) = new int[n];
	}
}
void nhapmang(int **&a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> *(*(a + i) + j);
		}
	}
}
void xuatmang(int **a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << *(*(a + i) + j) << "\t";
		}
		cout << endl;
	}
}
void giaiphong(int **a, int n)
{
	for (int i = 0; i < n; i++)
	{
		delete[] * (a + i);
	}
	delete[] a;
}
void tongcacsodcc(int **a, int n) {
	int tong = 0;
	for(int i = 0; i<n; i++)
	{
		tong = tong + *(*(a + i) + i);
	}
	cout << "Tong cac so tren dcc la: " << tong << endl;
}
int kiemtrasochan(int ch)
{
	if(ch%2 == 0)
	return 1;
	return 0;
}

void sochandcc(int **a, int n)
{
	int max;
		for (int i = 0; i < n; i++)
		{
			if (kiemtrasochan(*(*(a + i) + i))  == 1)
				max = *(*(a + i) + i);
				break;
		}
	    	for (int j = 0; j < n; j++)
	    	{
	    		if (kiemtrasochan(*(*(a + j) + j))  == 1 && *(*(a + j) + j) > max)
			    	max = *(*(a + j) + j);			   				
	    	}
		cout << "So chan lon nhat tren dcc la: " << max << endl;
}
bool KTNT(int x)
{
		if (x < 2)
			return false;
		for (int h = 2; h < x; h++)
		{
			if (x % h == 0)
				return false;
		}
		return true;	
}
void SNTNN(int **a, int n) // ham nay dua theo bai code C tren web SNT_nhieunhat
{
    int dem[100] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (KTNT(*(*(a + i) + j)) == true)
            {
                dem[i]++;
            }
        }
    }
    int Max = dem[0];
    for (int i = 1; i < n; i++)
    {
        Max = (Max > dem[i]) ? Max : dem[i]; //cho nay that su la ko hieu luon :((((
    }
    for (int i = 0; i < n; i++)
    {
        if (Max == dem[i])
        {
            cout << "Dong co SNT nhieu nhat la: " << i << endl;
        }
    }
}
/*void demsoNT(int **a, int n)
{
	int b[10];
	for (int i = 0; i < n; i++)
	{
		int count = 0;
		for (int j = 0; j < n; j++)
		{
			if (KTNT(a, n, *(*(a + i) + j)) == true)
				count++;
		}
		b[i] = count;
	}
	for (int i = 0; i < n; i++)
	{
		cout << "So nt co trong hang " << i << " la: " << b[i] << endl;
	}
}*/
int main()
{
	int n, **a;
	cout << "Nhap n (ma tran vuong voi n hang, n cot): ";
	cin >> n;
	capphat(a, n);
	nhapmang(a, n);
	xuatmang(a, n);
    sochandcc(a,n);
	SNTNN(a, n);
//	tongcacsodcc(a,n);
//	cout << "Dong co SNT nhieu nhat la: ";
	giaiphong(a, n);
	system("pause");
	return 0;
}
