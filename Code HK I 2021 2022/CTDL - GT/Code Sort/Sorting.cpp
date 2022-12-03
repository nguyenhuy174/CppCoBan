#include <iostream>
using namespace std;
#define NUM 10 // number elements
void output_array(int a[], int n)
{
	cout << endl;
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}
void swap(int& x, int& y)
{
	int t = x; x = y; y = t;
}
void interchange_sort(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i] > a[j])
				swap(a[i], a[j]);
}
void selection_sort(int a[], int n)
{
	int index_min;
	for (int i = 0; i < n - 1; i++)
	{
		index_min = i;
		for (int j = i + 1; j < n; j++)
			if (a[j] < a[index_min])
				index_min = j;
		int t = a[i];
		a[i] = a[index_min];
		a[index_min] = t;
	}
}
void insertion_sort(int a[], int n)
{
	int pos, i, val;
	for (i = 1; i < n; i++)
	{
		val = a[i];
		pos = i - 1;
		while (pos >= 0 && a[pos] > val)
		{
			a[pos + 1] = a[pos];
			pos--;
		}
		a[pos + 1] = val;
	}
}
void buble_sort(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = n - 1; j > i; j--)
			if (a[j] < a[j - 1])
				swap(a[j], a[j - 1]);
	}
}
void quick_sort(int a[], int left, int right)
{
	int pivot = a[(left + right) / 2];
	int i = left, j = right;
	do
	{
		while (a[i] < pivot)
			i++;
		while (a[j] > pivot)
			j--;
		if (i <= j)
		{
			swap(a[i], a[j]);
			i++;
			j--;
		}
	} while (i < j);

	if (left < j)
		quick_sort(a, left, j);
	if (i < right)
		quick_sort(a, i, right);
}

void heap_subtree(int a[], int n, int index)
{//n:size of heap, index: position of node current
	int left = 2 * index + 1;
	int right = 2 * index + 2;
	int pos = index;
	if (left<n && a[left]>a[pos])
		pos = left;
	if (right < n && a[right] > a[pos])
		pos = right;
	if (pos != index)
	{
		swap(a[index], a[pos]);
		heap_subtree(a, n, pos);
	}
}
void heap_sort(int a[], int n)
{
	for (int i = (n - 2) / 2; i >= 0; i--)//build heap
		heap_subtree(a, n, i);
	for (int i = n - 1; i > 0; i--)
	{
		swap(a[0],a[i]); //move root current to head
		heap_subtree(a, i, 0);
	}
}
void shell_sort(int a[], int n)
{
	int i, j, x, h = 1;
	while (h <= n / 3)
		h = h * 3 + 1;
	while (h > 0)
	{
		for (i = h; i < n; i++)
		{
			x = a[i];
			j = i - h;
			while ((x < a[j]) && (j >= 0))
			{
				a[j + h] = a[j];
				j = j - h;
			}
			a[j + h] = x;
		}
		h = (h - 1) / 3;
	}
}
//void Merge(int a[], int left, int right)
//{
//	int mid = (left + right) / 2;
//	int i = left, j = mid + 1;
//	int* temp = new int[right - left + 1];
//	int k = 0;
//	while ((i < mid + 1) && (j < right + 1))
//	{
//		if (a[i] < a[j])
//			temp[k++] = a[i++];
//		else
//			temp[k++] = a[j++];
//	}
//	while (i < mid + 1)
//		temp[k++] = a[i++];
//} thieu khoang 8 dong cua 'Merge'
//void merge_sort(int a[], int left, int right)
//{
//	if (left < right)
//	{
//		int mid = (left + right) / 2;
//		merge_sort(a, left, mid);
//		merge_sort(a, mid + 1, right);
//		Merge(a, left, right);
//	}
//}
void menu()
{
	int a[] = { 17, 2, 9, 5, 8, 15, 3, 3, 14 };
	int n = sizeof(a) / sizeof(int);

	int option;
	do {
		system("cls");
		cout << "0. Exit\n" << "1. Interchange\n" << "2. Selection\n" << "3. Insertion\n" << "4. Buble\n" << "5. Quick\n"
			<< "6. Heap\n" << "7. Shell\n" << "8. Merge\n" << "9. Natural Merge\n" << "10. Radix\n" << "11. OUTPUT ARRAY\n";
		cout << "\n\nPlease Choose an option you want to sort: "; cin >> option;
		switch (option)
		{
		case 0: break;
		case 1: interchange_sort(a, n);
			break;
		case 2: selection_sort(a, n);
			break;
		case 3:insertion_sort(a, n);
			break;
		case 4: buble_sort(a, n);
			break;
		case 5: quick_sort(a, 0, n - 1);
			break;
		case 6: heap_sort(a, n);
			break;
		case 7: shell_sort(a, n);
			break;
		//case 8: merge_sort(a, 0, n - 1);
			break;
		case 11: output_array(a, n);
			break;
		}
		cout << endl;
		system("pause");
	} while (option > 0 && option <= 11);
}
int main()
{
	menu();
	system("pause");
	return 0;
}