#include<iostream>
using namespace std;
#define n 10
#define k 10
struct NODE
{
	int key;
	NODE* pNext;
};
NODE* M[n];
NODE* create_node(int x)
{
	NODE* p = new NODE;
	if (p == NULL)
		return NULL;
	p->key = x;
	p->pNext = NULL;
	return p;
}
int len_list(NODE* l)
{
	NODE *Q = l;
	int i = 0;
	while (Q != NULL)
	{
		i++;
		Q = Q->pNext;
	}
	return i;
}
void add_head(NODE* &l, int x)
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
void del_head(NODE* &l)
{
	if (l == NULL)
		return;
	NODE* Q = l;
	l = l->pNext;
	delete Q;
}
void del_tail(NODE* &l)
{
	if (l == NULL)
		return;
	if (l->pNext == NULL)
		del_head(l);
	else
	{
		NODE* Q = l;
		while (Q->pNext->pNext != NULL)
			Q = Q->pNext;
		NODE* q = Q->pNext;
		Q->pNext = NULL;
		delete q;
	}
}
void del_position(NODE* &l, int pos)
{
	if (l == NULL)
		return;
	if (pos <= 1)
		del_head(l);
	else
	{
		if (pos > len_list(l))
			del_tail(l);
		else
		{
			int i = 1;
			NODE*q = l;
			NODE* p = NULL;
			while (i != pos - 1)
			{
				i++;
				q = q->pNext;
			}
			p = q->pNext;
			q->pNext = p->pNext;
			delete p;
		}
	}
}
int search_key(NODE* l, int x)
{
	int i = 1;
	NODE* Q = l;
	while (Q != NULL&& Q->key != x)
	{
		i++;
		Q = Q->pNext;
	}
	if (Q == NULL)
		return 0;
	else
		return i;
}
int h(int x)
{
	return x % k;
}
void init_hash_table()
{
	for (int i = 0; i < n; i++)
		M[i] = NULL;
}
void insert(int x)
{
	int i = h(x);
	if (search_key(M[i], x) == 0)
		add_head(M[i], x);
	else
		cout << x << " already in the dictionary" << endl;
}
void del(int x)
{
	int i = h(x);
	int pos = search_key(M[i], x);
	if (pos != 0)
		del_position(M[i], pos);
	else
		cout << " does not exist" << endl;
}
void search(int x)
{
	int i = h(x);
	int pos = search_key(M[i], x);
	if (pos != 0)
		cout << "\nexisting" << endl;
	else
		cout << "\ndoes not exist" << endl;
}
void out()
{
	for (int i = 0; i < n; i++)
	{
		NODE* Q = M[i];
		cout << "\n address " << i << ": ";
		if (Q == NULL)
			cout << "->NULL";
		while (Q != NULL)
		{
			cout << "->" << Q->key;
			Q = Q->pNext;
		}

	}
}
void del_all()
{
	for (int i = 0; i < n; i++)
	{
		if (M[i] != NULL)
		{
			while (M[i] != NULL)
				del_head(M[i]);

		}
	}
}
void menu()
{
	init_hash_table();
	int op;
	int x;
	do
	{
		system("cls");
		cout << "0. Exit  " << "1.Insert  " << "2.Search  " << "3.Delete   " << "4.Output  " <<"5.del all"<< endl;
		cout << "Enter option: "; cin >> op;
		if (op == 0)
			break;
		if (op == 1)
		{
			cout << "x= "; cin >> x;
			insert(x);
		}
		if (op == 2)
		{
			cout << "x= "; cin >> x;
			search(x);
		}
		if (op == 3)
		{
			cout << "x= "; cin >> x;
			del(x);
		}
		if (op == 4)
		{
			out();
			cout << endl;
		}
		if (op==5)
			del_all();
		system("pause");
		cout << endl;
	} while (op > 0 && op <= 5);

}
int main()
{
	menu();
	del_all();
	return 0;
}
