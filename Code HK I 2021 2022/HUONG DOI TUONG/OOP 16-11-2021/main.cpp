#include<iostream>
#include<string>
#include<cstring>
#include"DanhSach.h"

using namespace std;

template <typename T>
void insertList(DanhSach<T>& list)
{
	int n, pos;
	T val;
	do
	{
		system("cls");
		cout << "\n0. Quit";
		cout << "\n1. Insert Head";
		cout << "\n2. Insert Tail";
		cout << "\n3. Insert Mid";
		cout << "\nEnter Option: ";
		cin >> n;
		switch (n)
		{
		case 0:
			break;
		case 1:
			cout << "\nEnter Value: ";
			cin >> val;
			list.push_front(val);
			break;
		case 2:
			cout << "\nEnter Value: ";
			cin >> val;
			list.push_back(val);
			break;
		case 3:
			cout << "\nEnter Value: ";
			cin >> val;
			cout << "\nEnter Location: ";
			cin >> pos;
			list.push_mid(val, pos);
			break;
		default:
			break;
		}
	} while (n != 0);
}

template <typename T>
void removelist(DanhSach<T>& list)
{
	int n;
	T val;
	do
	{
		system("cls");
		cout << "\n0. Quit";
		cout << "\n1. Remove Head";
		cout << "\n2. Remove Tail";
		cout << "\nEnter Option: ";
		cin >> n;
		switch (n)
		{
		case 0:
			break;
		case 1:
			list.pop_front();
			break;
		case 2:
			list.pop_back();
			break;
		default:
			break;
		}
	} while (n != 0);
}

template <typename T>
void searchlist(DanhSach<T>& list)
{
	T val;
	cout << "\nEnter Value: ";
	cin >> val;
	list.search(val);
}

template <typename T>
void sizelist(DanhSach<T>& list)
{
	cout << "\n\t" << list.size() << endl;
}

template <typename T>
void clearlist(DanhSach<T>& list)
{
	int n = list.size();
	for (int i = 1; i <= n; i++)
	{
		list.pop_front();
	}
}

template <typename T>
void menu(DanhSach<T>& list)
{
	int n;
	do
	{
		system("cls");
		cout << "\n0. Quit";
		cout << "\n1. Insert List";
		cout << "\n2. Remove List";
		cout << "\n3. Search List";
		cout << "\n4. Size List";
		cout << "\n5. Clear List";
		cout << "\n6. Output List";
		cout << "\nEnter Option: ";
		cin >> n;
		switch (n)
		{
		case 0:
			break;
		case 1:
			insertList(list);
			break;
		case 2:
			removelist(list);
			break;
		case 3:
			searchlist(list);
			system("pause");
			break;
		case 4:
			sizelist(list);
			system("pause");
			break;
		case 5:
			clearlist(list);
			break;
		case 6:
			list.out_list();
			system("pause");
			break;
		default:
			break;
		}

	} while (n != 0);
}

int main()
{
	int n;
	DanhSach<int> list;
	DanhSach<float> list1;
	DanhSach<string> list2;
	do
	{
		system("cls");
		cout << "\n0. Quit";
		cout << "\n1. List Integer";
		cout << "\n2. List Float";
		cout << "\n3. List String";
		cout << "\nEnter Option: ";
		cin >> n;
		switch (n)
		{
		case 1:
			menu(list);
			break;
		case 2:
			menu(list1);
			break;
		case 3:
			menu(list2);
			break;
		default:
			break;
		}
	} while (n != 0);
	system("pause");
	return 0;
}