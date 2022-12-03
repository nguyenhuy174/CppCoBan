#include <iostream>
#include <string>
#include <cstring>

using namespace std;

struct Node
{
	int data;
	Node* next;
};

struct LinkedList
{
	Node* head;
	Node* tail;
};

Node* CreateNode(int init_data)
{
	Node* node = new Node;
	node->data = init_data;
	node->next = NULL; 
	return node;
}

void CreateList(LinkedList& l)
{
	l.head = NULL;
	l.tail = NULL;
}


void AddHead(LinkedList& l, Node* node)
{
	if (l.head == NULL)
	{
		l.head = node;
		l.tail = node;
	}
	else
	{
		node->next = l.head;
		l.head = node;
	}
}

void AddTail(LinkedList& l, Node* node)
{
	if (l.head == NULL)
	{
		l.head = node;
		l.tail = node;
	}
	else
	{
		l.tail->next = node;
		l.tail = node;
	}
}

void PrintList(LinkedList l)
{
	if (l.head != NULL)
	{
		Node* node = l.head;
		while (node != NULL)
		{
			cout << node->data << ' ';
			node = node->next; // Chuy?n sang node ti?p theo
		}
	}
}

int main()
{
	// Create a linked list
	LinkedList list;
	CreateList(list);

	// Add sample data to list
	Node* node;
	for (int i = 1; i <= 10; i++)
	{
		// Create new node with init data is i
		node = CreateNode(i);
		
		// Add node to head
		// List that is added node by AddHead will be reversed
		//AddHead(list, node);
		
		// Add node to Tail
		AddTail(list, node);
	}

	// Print list
	PrintList(list);
	cout << endl;

	return 0;
}
