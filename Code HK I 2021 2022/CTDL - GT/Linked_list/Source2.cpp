#include<iostream>
using namespace std;

struct NODE
{
	int data;
	NODE* pNext;
};

struct QUEUE
{
	NODE* pFront;
	NODE* pBack;
};

NODE* create_node(int x)
{
	NODE* p = new NODE;
	p->data = x;
	p->pNext = NULL;
	return p;
}

void create_queue(QUEUE& q)
{
	q.pFront = NULL;
	q.pBack = NULL;
}

bool empty(QUEUE q)
{
	return q.pFront == NULL;
}

int size(QUEUE q)
{
	int i = 0;
	NODE* Q = q.pFront;
	while (Q != NULL)
	{
		i++;
		Q = Q->pNext;
	}
	return i;
}

void push(QUEUE& q, int x)
{
	NODE* p = create_node(x);
	if (empty(q) == true)
		q.pFront = q.pBack = p;
	else
	{
		q.pBack->pNext = p;
		q.pBack = p;
	}
}

void pop(QUEUE& q)
{
	NODE* Q = q.pFront;
	q.pFront = q.pFront->pNext;
	delete Q;
}

int front(QUEUE q)//--lay phan tu dau
{
	return q.pFront->data;//--lay data
}

int back(QUEUE q)//--truy cap vao phan tu cuoi
{
	return q.pBack->data;
}
int main()
{
	QUEUE q;
	create_queue(q);
	//push(q, 2);
	//push(q, 3);
	//push(q, 7);
	//pop(q);
	for (int i = 15; i <= 20; i++)
	{
		push(q, i);
	}
	cout << front(q) << endl;
	cout << back(q) << endl;
	//cout << empty(q) << endl;
	//cout << size(q);

	cout << endl;
	system("pause");
	return 0;
}