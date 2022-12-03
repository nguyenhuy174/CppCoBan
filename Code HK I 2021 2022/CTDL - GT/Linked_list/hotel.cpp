#include <iostream>
#include <string>
#include <cstring>
using namespace std;

struct ROOM
{
	int roomNumber;
	string roomClassify;
	int roomStatus;
	string tenant;
};

struct NODE
{
	ROOM data;
	NODE* pNext;
};

typedef NODE* LIST;

NODE* create_node(ROOM room)
{
	NODE* p = new NODE;
	p->data = room;
	p->pNext = NULL;
	return p;
}

void create_list(LIST& l)//or void create_list(NODE* &l)
{
	l = NULL;
}

void add_tail(LIST& l, ROOM room)
{
	NODE* p = create_node(room);
	if (l == NULL)
		l = p;
	else //duyet tu dau den cuoi
	{
		NODE* Q = l;
		while (Q->pNext != NULL)
			Q = Q->pNext;
		Q->pNext = p;
	}
}

void init(LIST& l)
{
	ROOM room;
	for (int i = 1; i <= 10; i++)
	{
		if (i <= 2)
			room.roomClassify = "RR";
		else
		{
			if (i <= 5)
				room.roomClassify = "DB";
			else
				room.roomClassify = "TC";
		}
		room.roomNumber = i;
		room.roomStatus = 0;
		room.tenant = "empty";
		add_tail(l, room);
	}
}

void output_room(ROOM room)
{
	cout << room.roomNumber << "  " << room.roomClassify << "  "
		<< room.roomStatus << "  " << room.tenant << endl;
}

void output(LIST l)
{
	NODE* Q = l;
	while (Q != NULL)
	{
		output_room(Q->data);
		Q = Q->pNext;
	}
}

void standard(string &str)
{
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ' ')
		{
			str.erase(i, 1);
			i--;
		}
	}
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
}

void check_in(LIST l)
{
	string r_classify;
	do
	{
		cout << "Enter classify: ";
		getline(cin, r_classify);
		standard(r_classify);
		if (r_classify != "RR" && r_classify != "DB" && r_classify != "TC")
			cout << "Re_enter classify: " << endl;
	} while (r_classify != "RR" && r_classify != "DB" && r_classify != "TC");
	NODE* Q = l;
	while (Q != NULL)
	{
		if (Q->data.roomClassify == r_classify && Q->data.roomStatus == 0)
			output_room(Q->data);
		Q = Q->pNext;
	}
	int num;
	cout << "Enter room num: ";
	cin >> num;
	cin.ignore();
	Q = l;
	while (Q != NULL)
	{
		if (Q->data.roomNumber == num && Q->data.roomClassify == r_classify && Q->data.roomStatus == 0)
		{
			Q->data.roomStatus = 1;
			string name;
			cout << "Enter name: ";
			getline(cin, name);
			Q->data.tenant = name;
		}
		Q = Q->pNext;
	}
}
void check_out(LIST l)
{
	int num;
	cout << "ENTER ROOM NUM: ";
	cin >> num;
	cin.ignore();
	NODE* Q = l;
	while (Q != NULL)
	{
		if (Q->data.roomNumber == num)
		{
			Q->data.roomStatus = 0;
			Q->data.tenant = "empty";
		}
		Q = Q->pNext;
	}
}

void menu()
{
	LIST l;
	create_list(l);
	init(l);
	int op;
	do
	{
		system("cls");
		cout << "0. Exit\n" << "1. Check in\n" << "2. Check out\n" << "3. Output\n";
		cout << "Enter option: ";
		cin >> op;
		cin.ignore();
		if (op == 0)
			break;
		if (op == 1)
			check_in(l);
		if (op == 2)
			check_out(l);
		if (op == 3)
			output(l);
		system("pause");
	} while (op > 0 && op <= 3);
}
int main()
{
	menu();
	system("pause");
	return 0;
}