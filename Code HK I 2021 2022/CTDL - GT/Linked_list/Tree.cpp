#include<iostream>
using namespace std;

struct NODE
{
	int data;
	NODE* pLeft;
	NODE* pRight;
};

struct TREE
{
	NODE* pLeft;
	NODE* pRight;
};

typedef NODE* TREE;

NODE* create_node(int x)
{
	NODE* p = new NODE;
	p->data = x;
	p->pLeft = NULL;
	p->pRight = NULL;
	return p;
}

void create_tree(TREE& t)
{
	t = NULL;
}

void build_tree(TREE &t, int x)
{
	NODE* p = create_node(x);
	if (t == NULL)
		t = p;
	else
	{
		if (t->data == p->data)
			return;
		if (p->data < t->data)
			build_tree(t->pLeft, x);
		else
			build_tree(t->pRight, x);
	}
}

void input(TREE &t)
{
	int a[] = { 8,3,5,2,20,11,30,9,18,4 };
	int n = sizeof(a) / sizeof(int);
	for (int i = 0; i < n; i++)
	{
		build_tree(t, a[i]);
	}
}

void NLR(TREE t)
{
	if (t != NULL)
	{
		cout << t->data << " ";
		NLR(t->pLeft);
		NLR(t->pRight);
	}
}

void NRL(TREE t)
{
	if (t != NULL)
	{
		cout << t->data << " ";
		NRL(t->pRight);
		NRL(t->pLeft);
	}
}

void LNR(TREE t)
{
	if (t != NULL)
	{
		LNR(t->pLeft);
		cout << t->data << " ";
		LNR(t->pRight);
	}
}

void RNL(TREE t)
{
	if (t != NULL)
	{
		RNL(t->pRight);
		cout << t->data << " ";
		RNL(t->pLeft);
	}
}

void LRN(TREE t)
{
	if (t != NULL)
	{
		LRN(t->pLeft);
		cout << t->data << " ";
		LRN(t->pRight);
	}
}

void RLN(TREE t)
{
	if (t != NULL)
	{
		RLN(t->pRight);
		RLN(t->pLeft);
		cout << t->data << " ";
	}
}
NODE* search_node(TREE t, int key)
{
	if (t == NULL)
		return NULL;
	if (t->data == key)
		return t;
	if (key < t->data)
		return search_node(t->pLeft, key);
	else
		return search_node(t->pRight, key);
}

int max(TREE t)
{
	if (t->pRight != NULL)
		max(t->pRight);
	else
		return t->data;
}

int min(TREE t)
{
	if (t->pLeft != NULL)
		min(t->pLeft);
	else
		return t->data;
}

void count_odd(TREE t, int& count)
{
	if (t != NULL)
	{
		if (t->data % 2 == 0)
			count++;
		count_odd(t->pLeft, count);
		count_odd(t->pRight, count);
	}
}

bool is_prime(int n)
{
	if (n < 2)
		return false;
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
			return false;
		return true;
	}
}

void count_prime(TREE t, int& count)
{
	if (t != NULL)
	{
		if (is_prime(t->data) == true)
			count++;
		count_prime(t->pLeft, count);
		count_prime(t->pRight, count);
	}
}

void leaf(TREE t)
{
	if (t != NULL)
	{
		if (t->pLeft == NULL && t->pRight == NULL)
			cout << t->data << " ";
		leaf(t->pLeft);
		leaf(t->pRight);
	}
}

int height(TREE t)
{
	if (t == NULL)
		return 0;
	int HL, HR;
	HL = height(t->pLeft);
	HR = height(t->pRight);
	if (HL > HR)
		return HL + 1;
	return HR + 1;
}

int main()
{
	TREE t, p;
	create_tree(t);
	input(t);
	LNR(t);
	p = search_node(t, 20);
	//if (p == NULL)
	//	cout << "\nko co\n";
	//else
	//	cout << "\nco\n";
	cout << min(t);
	cout << endl;
	system("pause");
	return 0;
}