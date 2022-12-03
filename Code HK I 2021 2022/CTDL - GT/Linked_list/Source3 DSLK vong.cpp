#include<iostream>
using namespace std;

struct NODE
{
	int data;
	NODE* pNext;
};

struct LIST
{
	NODE* pHead;
	NODE* pTail;
};

NODE* create_node(int x)
{
	NODE* p = new NODE;
	p->data = x;
	p->pNext = NULL;
	return p;
}

void create_list(LIST& l)
{
	l.pHead = NULL;
	l.pTail = NULL;
}

void add_head(LIST& l, int x)
{
	NODE* p = create_node(x);
	if (l.pHead == NULL)
		l.pHead = l.pTail = p;
		l.pTail->pNext = p;
	else
	{
		p->pNext = l.pHead;
		l.pTail->pNext = p;
		l.pHead = p;
	}
}

void add_tail(LIST& l, int x)//them cuoi
{
	NODE* p = create_node(x);
	if (l.pHead == NULL)
		l.pHead = l.pTail = p;
	else
	{
		p->pNext= l.pHead;
		l.pTail->pNext = p;
		l.pTail = p;
	}
}

void input(LIST& l)
{
	int x;
	cout << "x = "; cin >> x;
	while (x != 0)
	{
		add_head(l, x);
		cout << "x = "; cin >> x;
	}
}

void out(LIST l)
{
	if (l.pHead == NULL)
		return;
	NODE* Q = l.pHead;
	do
	{
		cout << Q->data << " ";
		Q = Q->pNext;
	} while (Q != l.pHead);
}

void del_head(LIST& l)
{
	if (l.pHead == NULL)
		return;
	NODE* Q = l.pHead;
	if (l.pHead == l.pTail)
	{
		l.pHead = NULL;
		l.pTail = NULL;
	}
	else
	{
		l.pHead = l.pHead->pNext;
		l.pTail->pNext = l.pHead;
	}
	delete Q;
}

void del_all(LIST& l)
{
	while (l.pHead != NULL)
		del_head(l);
}

void del_tail(LIST& l)
{
	if (l.pHead == NULL)
		return;
	NODE* Q = l.pTail;
	if (l.pHead == l.pTail)
	{
		l.pHead = NULL;
		l.pTail = NULL;
	}
	else
	{
		l.pTail = l.pTail->pPre;
		l.pTail->pNext = NULL;
	}
	delete Q;
}
int main()
{
	LIST l;
	create_list(l);
	input(l);
	out(l);
	cout << "\nAFTER:......\n";

	cout << endl;
	system("pause");
	return 0;
}