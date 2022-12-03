#include<iostream>
#include"MyStack.h"

using namespace std;

template <typename T>
void pushStack(MyStack<T>& array1)
{
	T val;
	cout << "\nEnter Value: ";
	cin >> val;
	array1.push(val);
}
template <typename T>
void topStack(MyStack<T>& array1)
{
	array1.top();
}
template <typename T>
void popStack(MyStack<T>& array1)
{
	cout << "\nThe Top Element Is: ";
	array1.pop();
	cout << endl;
}
template <typename T>
void outStack(MyStack<T>& array1)
{
	array1.output();
}
template <typename T>
void menu(MyStack<T>& array1)
{
	int n;
	do
	{
		system("cls");
		cout << "0. Quit\n";
		cout << "1. Push\n";
		cout << "2. Top\n";
		cout << "3. Pop\n";
		cout << "4. OutPut\n";
		cout << "Enter Option: ";
		cin >> n;
		switch (n)
		{
		case 1:
			pushStack(array1);
			break;
		case 2:
			topStack(array1);
			system("pause");
			break;
		case 3:
			popStack(array1);
			system("pause");
			break;
		case 4:
			outStack(array1);
			cout << endl;
			system("pause");
			break;
		default:
			break;
		}
	} while (n != 0);
}
void CodeBinary(MyStack<int>& binary)
{
	int bi, sur;
	do
	{
		cout << "\nEnter An Integer You Want To Convert: ";
		cin >> bi;
		if (bi <= 0)
			cout << "Input A Number Greater Than 0!\n";
	} while (bi <= 0);
	do
	{
		sur = bi % 2;
		binary.push(sur);
		bi = bi / 2;
	} while (bi != 0);
	cout << "\nThe Converted Binary Number Is: ";
	while (binary.IsEmpty() == false)
	{
		binary.pop();
	}
}

int main()
{
	MyStack<int> array1;
	MyStack<float> array2;
	MyStack<string> array3;
	MyStack<int> binary;
	int op;
	do
	{
		system("cls");
		cout << "0. Quit";
		cout << "\n1. Array Integer";
		cout << "\n2. Array Float";
		cout << "\n3. Array String";
		cout << "\n4. Convert Binary ";
		cout << "\nEnter Option: ";
		cin >> op;
		switch (op)
		{
		case 1:
			menu(array1);
			break;
		case 2:
			menu(array2);
			break;
		case 3:
			menu(array3);
			break;
		case 4:
			CodeBinary(binary);
			cout << "\n\t";
			system("pause");
			break;
		default:
			break;
		}
	} while (op != 0);

	cout << endl;
	system("pause");
	return 0;
}