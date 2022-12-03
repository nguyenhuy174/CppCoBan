#pragma once
#include<iostream>
#include<string>
using namespace std;

template <typename T>
struct Value
{
	T data;
	Value()
	{
		data = 0;
	}
};

template <>
struct Value <string>
{
	string data;
	Value()
	{
		data.assign("");
	}
};

template <typename T>
struct Node
{
	Node();
	Value <T> data;
	Node<T>* pNext;
};

template<typename T>
inline Node<T>::Node()
{
	pNext = NULL;
}

template<typename T>
class DanhSach
{
private:
	Node<T>* pHead;
	bool IsEmpty;
public:
	DanhSach();
	void push_back(T val);
	void push_front(T val);
	void pop_back();
	void pop_front();
	void out_list();
	void search(T val);
	int size();
	void push_mid(T val, int pos);
};

template<typename T>
inline DanhSach<T>::DanhSach()
{
	pHead = NULL;
	IsEmpty = true;
}

template<typename T>
inline void DanhSach<T>::push_back(T val)
{
	Node<T>* n = new Node<T>;
	n->data.data = val;
	if (pHead == NULL)
		pHead = n;
	else
	{
		Node<T>* Q = pHead;
		while (Q->pNext != NULL)
			Q = Q->pNext;
		Q->pNext = n;
	}
	IsEmpty = false;
}

template<typename T>
inline void DanhSach<T>::push_front(T val)
{
	Node<T>* n = new Node<T>;
	n->data.data = val;
	if (pHead == NULL)
		pHead = n;
	else
	{
		n->pNext = pHead;
		pHead = n;
	}
	IsEmpty = false;
}

template<typename T>
inline void DanhSach<T>::pop_back()
{
	if (pHead == NULL)
	{
		cout << "\n\tCan't Delete!! Empty List";
	}
	else
	{
		if (pHead->pNext == NULL)
		{
			Node<T>* Q = pHead;
			pHead = NULL;
			delete Q;
		}
		else
		{
			Node<T>* Q = pHead;
			while (Q->pNext->pNext != NULL)
				Q = Q->pNext;
			Node<T>* P = Q->pNext;
			Q->pNext = NULL;
			delete P;
		}
	}
}

template<typename T>
inline void DanhSach<T>::pop_front()
{
	if (pHead == NULL)
	{
		cout << "\n\tCan't Delete!! Empty List";
	}
	else
	{
		Node<T>* n = new Node<T>;
		if (IsEmpty == false)
		{
			n = pHead;
			pHead = pHead->pNext;
			delete n;
		}
		else
		{
			cout << "\n\tPop_front() FAILED!!";
			IsEmpty = true;
		}
	}
}

template<typename T>
inline void DanhSach<T>::out_list()
{
	if (pHead == NULL)
		cout << "\n\tEmpty List";
	else
	{
		cout << endl;
		Node<T>* Q = pHead;
		while (Q != NULL)
		{
			cout << "\t" << Q->data.data;
			Q = Q->pNext;
		}
	}
	cout << endl;
}

template<typename T>
inline void DanhSach<T>::search(T val)
{
	Node<T>* Q = pHead;
	int i = 1;
	while (Q != NULL)
	{
		if (Q->data.data == val)
		{
			cout << "\nHave Found Value " << val << " At Position: " << i << endl;
			break;
		}
		else
		{
			Q = Q->pNext;
			i += 1;
		}
	}
	if (Q == NULL)
		cout << "\nCould not find Value " << val << " In List!!" << endl;
}

template<typename T>
inline int DanhSach<T>::size()
{
	Node<T>* Q = pHead;
	int i = 0;
	while (Q != NULL)
	{
		Q = Q->pNext;
		i += 1;
	}
	return i;
}

template<typename T>
inline void DanhSach<T>::push_mid(T val, int pos)
{
	Node<T>* n = new Node<T>;
	n->data.data = val;
	if (pos <= 1)
	{
		push_front(val);
	}
	else
	{
		if (pos > size())
		{
			push_back(val);
		}
		else
		{
			int i = 1;
			Node<T>* Q = pHead;
			while (i != pos - 1)
			{
				i++;
				Q = Q->pNext;
			}
			n->pNext = Q->pNext;
			Q->pNext = n;
		}
	}
}
