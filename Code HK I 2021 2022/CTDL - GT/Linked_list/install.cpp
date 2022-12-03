#include <iostream>
using namespace std;
#include<string>
#include<cstring>

struct NODE
{
	string data;
	NODE* pNext;
};
typedef NODE* STACK;

NODE* create_node(string x)
{
	NODE* p = new NODE;
	p->data = x;
	p->pNext = NULL;
	return p;
}

void create_stack(STACK& pTop)
{
	pTop = NULL;
}

bool empty(STACK pTop)
{
	return pTop == NULL;
}

int size(STACK pTop)
{
	int i = 0;
	NODE* Q = pTop;
	while (Q != NULL)
	{
		i++;
		Q = Q->pNext;
	}
	return i;
}

void push(STACK& pTop, string x)
{
	NODE* p = create_node(x);
	if (empty(pTop) == true)
		pTop = p;
	else
	{
		p->pNext = pTop;
		pTop = p;
	}
}

void pop(STACK& pTop)//--xoa dau
{
	if (empty(pTop) == true)
		return;
	NODE* Q = pTop;
	//x = Q->data; --viet de phuc vu viec gi do--
	pTop = pTop->pNext;
	delete Q;
}

string top(STACK pTop)
{
	return pTop->data;
}

void daonguocchuoi(string str)
{
	STACK s;
	create_stack(s);
	int i = 0;
	int l = str.length();
	while (i < l)
	{
		if (str[i] != ' ')
		{
			string sub = "";
			while (str[i] != ' ')
			{
				sub = sub + str[i];
				i++;
			}
			push(s, sub);
		}
		i++;
	}
	string str1 = "";
	while (empty(s) == false)
	{
		str1 = top(s);
		pop(s);
		cout << str1 << " ";
	}
}

int main()
{
	//STACK s;
	//create_stack(s);
	daonguocchuoi("chao cac ban");
	cout << endl;
	system("pause");
	return 0;
}