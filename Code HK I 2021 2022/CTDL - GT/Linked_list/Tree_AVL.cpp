#include<iostream>
using namespace std;
struct NODE
{
	int key;
	int height;
	NODE* pLeft;
	NODE* pRight;
};
typedef NODE* TREE;
NODE* create_node(int x)
{
	NODE* p = new NODE;
	p->key = x;
	p->height = 1;
	p->pLeft = NULL;
	p->pRight = NULL;
	return p;
}
void create_tree(TREE& t)
{
	t = NULL;
}
int max(int a, int b)
{
	if (a > b)
		return a;
	return b;
}
int height_tree(TREE t)
{
	if (t == NULL)
		return 0;
	return t->height;
}
int get_balance(TREE& t)
{
	if (t == NULL)
		return 0;
	return height_tree(t->pLeft) - height_tree(t->pRight);
}
NODE* rotation_right(TREE& y)
{
	NODE* x = y->pLeft;
	NODE* T2 = x->pRight;
	//Quay phai
	x->pRight = y;
	y->pLeft = T2;
	//cap nhat lai chieu cao	
	y->height = max(height_tree(y->pLeft), height_tree(y->pRight)) + 1;
	x->height = max(height_tree(x->pLeft), height_tree(x->pRight)) + 1;

	return x;
}
NODE* rotation_left(TREE& x)
{
	NODE* y = x->pRight;
	NODE* T2 = y->pLeft;
	y->pLeft = x;
	x->pRight = T2;
	x->height = max(height_tree(x->pLeft), height_tree(x->pRight)) + 1;
	y->height = max(height_tree(y->pLeft), height_tree(y->pRight)) + 1;

	return y;
}
NODE* insert(TREE& t, int val)
{
	NODE* p = create_node(val);
	if (t == NULL)
		return p;
	if (val < t->key)
		t->pLeft = insert(t->pLeft, val);
	else if (val > t->key)
		t->pRight = insert(t->pRight, val);
	else
		return t;
	//sau khi can bang, cap nhat lai chieu cao
	t->height = max(height_tree(t->pLeft), height_tree(t->pRight)) + 1;
	int bal = get_balance(t);
	// LL
	if (bal > 1 && val < t->pLeft->key)
		return rotation_right(t);
	//RR
	if (bal<-1 && val>t->pRight->key)
		return rotation_left(t);
	//LR
	if (bal > 1 && val > t->pLeft->key)
	{
		t->pLeft = rotation_left(t->pLeft);
		return rotation_right(t);
	}
	//RL
	if (bal < -1 && val < t->pRight->key)
	{
		t->pRight = rotation_right(t->pRight);
		return rotation_left(t);
	}
	return t;
}
void input(TREE& t)
{
	int a[] = {6,10,5,7,11,8,16,4,9,14,18,21};
	int n = sizeof(a) / sizeof(int);
	for (int i = 0; i < n; i++)
		t = insert(t, a[i]);
}

void inorder(TREE t)
{
	if (t != NULL)
	{
		inorder(t->pLeft);
		cout << t->key << " ";
		inorder(t->pRight);
	}
}
void preorder(TREE t)
{
	if (t != NULL)
	{
		cout << t->key << " ";
		preorder(t->pLeft);
		preorder(t->pRight);
	}
}
int main()
{
	TREE t;
	create_tree(t);
	input(t);
	cout << "AVL:\n";
	//inorder(t);
	preorder(t);
	cout << endl;
	return 0;
}