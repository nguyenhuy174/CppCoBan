#pragma once
#include<iostream>

using namespace std;

template <typename T>
class MyStack
{
protected:
	T* Array;
	int size;
	int topEle;
public:
	MyStack();
	bool IsFull();
	bool IsEmpty();
	void top();
	void pop();
	void push(T val);
	void output();
};

template<typename T>
inline MyStack<T>::MyStack()
{
	topEle = -1;
	size = 100;
	Array = new T[size];
}

template<typename T>
inline bool MyStack<T>::IsFull()
{
	if (topEle == size - 1)
		return true;
	else
		return false;
}

template<typename T>
inline bool MyStack<T>::IsEmpty()
{
	if (topEle == -1)
		return true;
	else
		return false;
}

template<typename T>
inline void MyStack<T>::top()
{
	if (IsEmpty() == true)
		cout << "\nArray Is Empty!!\n";
	else
		cout << "\nThe Top Element Is: " << Array[topEle] << endl;
}

template<typename T>
inline void MyStack<T>::pop()
{
	if (IsEmpty() == true)
		cout << "\nArray Is Empty!!\n";
	else
	{
		cout << Array[topEle];
		topEle = topEle - 1;
	}
}

template<typename T>
inline void MyStack<T>::push(T val)
{
	if (IsFull() == true)
		cout << "\nArray Is Full!!!\n";
	else
	{
		topEle = topEle + 1;
		Array[topEle] = val;
	}
}

template<typename T>
inline void MyStack<T>::output()
{
	cout << "\nElements In Array: ";
	for (int i = 0; i < topEle + 1; i++)
	{
		cout << Array[i];
		cout << "  ";
	}
}
