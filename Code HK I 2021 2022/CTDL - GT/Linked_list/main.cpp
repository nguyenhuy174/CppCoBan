#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;
//DANH SACH STUDENT
//struct DATE
//{
//	int d, m, y;
//};

//struct STUDENT
//{
//	string ID;
//	string fullname;
//	DATE birthday;
//	float score;
//};
//
//struct NODE
//{
//	STUDENT data;
//	NODE* pNext;
//};

struct NODE //khai bao 1 nut
{
	int data; // (cau truc) data;
	NODE* pNext; // (con tro)* Next;
};
//NODE* Q: Q->data, Q->pNext

//struct LIST // 2 con tro
//{
//	NODE* pHead;
//	NODE* pTail;
//};

typedef NODE* LIST; // dinh nghia con tro NODE

NODE* create_node(int x)//tao node
{
	NODE* p = new NODE;
	if (p == NULL)
		return NULL;
	p->data = x;
	p->pNext = NULL;
	return p;
}

void create_list(LIST& l)//tao danh sach
{
	l = NULL;
}

void add_head(LIST& l, int x)
{
	NODE* p = create_node(x);
	if (l == NULL)
		l = p;
	else
	{
		p->pNext = l;
		l = p;
	}
}

void add_tail(LIST& l, int x)
{
	NODE* p = create_node(x);
	if (l == NULL)
		l = p;
	else
	{
		NODE* Q = l;
		while (Q->pNext != NULL)
			Q = Q->pNext;
		Q->pNext = p;
	}
}

int len_list(LIST& l)
{
	int i = 0;
	NODE* Q = l;
	while (Q != NULL)
	{
		i++;
		Q = Q->pNext;
	}
	return i;
}

void input(LIST& l)
{
	int x;
	cout << "x = "; cin >> x;
	while (x != 0)
	{
		add_tail(l, x);
		cout << "x = "; cin >> x;
	}
}

void output(LIST l)
{
	if (l == NULL)
		return;
	NODE* Q = l;
	while (Q != NULL)
	{
		cout << Q->data << " ";
		Q = Q->pNext;
	}
}

void write_file(fstream& f, LIST& l)
{
	string path;
	cout << "\npath file name: ";
	getline(cin, path);
	cin.ignore();
	f.open(path, ios::out | ios::binary);
	NODE* Q = l;
	while (Q != NULL)
	{
		int x;
		x = Q->data;
		f.write((char*)(&x), sizeof(int));
		Q = Q->pNext;
	}
	f.close();
}

void read_file(fstream& f, LIST& l)
{
	string path;
	cout << "\npath file name: ";
	//getline(cin, path);
	f.open(path, ios::in | ios::binary);
	int x;
	while (f.read((char*)(&x), sizeof(int)))
		add_tail(l, x);
	f.close();
}

int search_position(LIST& l, int x)
{
	NODE* Q = l;
	int i = 1;
	while (Q != NULL && Q->data != x)
	{
		Q = Q->pNext;
		i++;
	}
	if (Q == NULL)
		return 0;
	return i;
}

void swap(int& x, int& y)
{
	int t = x; x = y; y = t;
}
void sort(LIST l)
{
	for (NODE* Q = l; Q->pNext != NULL; Q = Q->pNext)
	{
		for (NODE* K = Q->pNext; K != NULL; K = K->pNext)
		{
			if (Q->data > K->data)
				swap(Q->data, K->data);
		}
	}
}

void add_pos(LIST& l, int x, int pos)
{
	NODE* p = create_node(x);
	if (pos <= 1)
		add_head(l, x);
	else
	{
		if (pos > len_list(l))
			add_tail(l, x);
		else
		{
			int i = 1;
			NODE* Q = l;
			while (i != pos - 1)
			{
				i++;
				Q = Q->pNext;
			}
			p->pNext = Q->pNext;
			Q->pNext = p;
		}
	}
}

void del_head(LIST& l)
{
	if (len_list(l) == 0)
		return;
	NODE* Q = l;
	l = l->pNext;
	delete Q;
}

void del_tail(LIST& l)
{
	if (len_list(l) == 0)
		return;
	//if (len_list(l) == 1)
	//	del_head(l);
	//this solution when link list has 1 element
	if (l->pNext == NULL)
	{
		NODE* Q = l;
		l = NULL;
		delete Q;
	}
	else
	{
		NODE* Q = l;
		while (Q->pNext->pNext != NULL)
			Q = Q->pNext;
		NODE* P = Q->pNext;
		Q->pNext = NULL;
		delete P;
	}
}

void del_pos(LIST& l, int pos)
{
	if (pos<1 || pos>len_list(l))
		return;
	else
	{
		if (pos == 1)
			del_head(l);
		else
		{
			if (pos == len_list(l))
				del_tail(l);
			else
			{
				int i = 1;
				NODE* Q = l;
				while (i != pos - 1)
				{
					i++;
					Q = Q->pNext;
				}
				NODE* P;
				P = Q->pNext;
				Q->pNext = P->pNext;
				delete P;
			}
		}
	}
}

void del_val(LIST& l, int val)
{
	while (search_position(l, val) != 0)
		del_pos(l, search_position(l, val));
}
int main()
{
	LIST l;
	fstream f;
	create_list(l);
	input(l);
	output(l);
	//del_head(l);
	//del_tail(l);
	del_val(l, 3);
	//cout << "\nlen list: ";
	//cout << len_list(l);
	//write_file(f, l);
	//read_file(f, l);
	//output(l);
	//cout << "\nVi tri can tim: ";
	//cout << search_position(l, 2) << endl;
	//add_pos(l, 19, 3);
	//sort(l);
	cout << endl;
	output(l);
	cout << endl;
	system("pause");
	return 0;
}