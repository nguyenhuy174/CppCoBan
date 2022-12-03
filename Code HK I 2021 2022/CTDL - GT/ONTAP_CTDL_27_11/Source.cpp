#include<iostream>
#include<string>
#include<cstring>
#include<iomanip>
using namespace std;

struct CITY
{
	string name;
	int area;
	int population;
};
struct NODE
{
	CITY data;
	NODE* pNext;
};

struct LIST
{
	NODE*pHead;
	NODE* pTail;
};

NODE* create_node(CITY& x)
{
	NODE* p = new NODE;
	p->data = x;
	p->pNext = NULL;
	return p;
}

void create_list(LIST &l)
{
	l.pHead = NULL;
	l.pTail = NULL;
}
void add_tail(LIST& l, CITY& x)
{
	NODE* p = create_node(x);
	if (l.pHead == NULL)
		l.pHead = p;
	else
	{
		NODE* Q = l.pHead;
		while (Q->pNext != NULL)
		{
			Q = Q->pNext;
		}
		Q->pNext = p;
		l.pTail = Q->pNext;
	}
}
void input(LIST& l,CITY& x)
{
	int n;
	cout << "Nhap n = ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin.ignore();
		cout << "Nhap Name: ";
		getline(cin, x.name);
		cout << "Nhap Area: ";
		cin >> x.area;
		cout << "Nhap Population: ";
		cin >> x.population;
		add_tail(l, x);
	}
}

void out_list(LIST& l)
{
	NODE* Q = l.pHead;
	if (Q == NULL)
		cout << "\nDanh sach rong!!\n";
	else
	{
		cout << setw(30) << left << "Name" << setw(10) << left << "Area" 
			<< setw(10) << left << "Population" << endl;
		while (Q != NULL)
		{
			cout<< setw(30)<<left << Q->data.name << setw(10) << left << Q->data.area 
				<< setw(10) << left << Q->data.population << endl;
			Q = Q->pNext;
		}
	}
}
void city_max(LIST& l, CITY x)
{
	int max;
	if (l.pHead == NULL)
		return;
	else
	{
		max = l.pHead->data.area;
		NODE* Q = l.pHead;
		while (Q != NULL)
		{
			if (Q->data.area >= max)
			{
				max = Q->data.area;
				Q = Q->pNext;
			}
			else
				Q = Q->pNext;
		}
	}
	NODE* K = l.pHead;
	while (K != NULL)
	{
		if (K->data.area == max)
		{
			cout << K->data.name << "\t" << K->data.area << "\t" << K->data.population << endl;
			K = K->pNext;
		}
		else
			K = K->pNext;
	}
}
void swap(CITY& a, CITY& b)
{
	CITY t = a;
	a = b;
	b = t;
}
void sort_up(LIST& l)
{
	if (l.pHead == NULL)
		return;
	else
	{
		if (l.pHead->pNext == NULL)
			out_list(l);
		else
		{
			for (NODE* Q = l.pHead; Q != NULL; Q = Q->pNext)
			{
				for (NODE* K = Q->pNext; K != NULL; K = K->pNext)
				{
					if (Q->data.area > K->data.area)
						swap(Q->data, K->data);
				}
			}
			out_list(l);
		}
	}
}
void del_city(LIST& l)
{
	if (l.pHead == NULL)
		return;
	else
	{
		string temp;
		cout << "\nEnter Name City To Be Delete:  ";
		cin.ignore();
		getline(cin, temp);
		if (l.pHead->data.name == temp)
		{
			NODE* Q = l.pHead;
			l.pHead = Q->pNext;
			delete Q;
		}
		else
		{
			if (l.pTail->data.name == temp)
			{
				NODE* Q = l.pHead;
				while (Q->pNext->pNext != NULL)
					Q = Q->pNext;
				NODE* P = Q->pNext;
				Q->pNext = NULL;
				l.pTail = Q;
				delete P;
			}
			else
			{
				NODE* Q = l.pHead;
				while (Q->pNext->data.name!=temp)
					Q = Q->pNext;
				NODE* P = Q->pNext;
				Q->pNext = P->pNext;
				delete P;
			}
		}
	}
}
int main()
{
	LIST l;
	create_list(l);
	CITY x;

	int n;
	do
	{
		system("cls");
		cout << "\n--Option--";
		cout << "\n0. Quit";
		cout << "\n1. Input City";
		cout << "\n2. Output City";
		cout << "\n3. City Max";
		cout << "\n4. Sort City";
		cout << "\n5. Del City";
		cout << "\nEnter Option: ";
		cin >> n;
		switch (n)
		{
		case 0:
			break;
		case 1:
			input(l, x);
			break;
		case 2:
			out_list(l);
			system("pause");
			break;
		case 3:
			cout << "City ​​have area biggest: " << endl;
			city_max(l, x);
			system("pause");
			break;
		case 4:
			cout << "\nSort:\n";
			sort_up(l);
			system("pause");
			break;
		case 5:
			cout << "\nXoa:\n";
			del_city(l);
			out_list(l);
			system("pause");
			break;
		default:
			break;
		}
	} while (n>0);
	return 0;
}