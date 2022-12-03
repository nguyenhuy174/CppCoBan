//#include<iostream>
//#include"HS.h"
//using namespace std;
//int main()
//{
//	HS o[10];
//	int i = 0, ch, j, roll;
//	while (1)
//	{
//		cout << "\n!!===STUDENT MANAGMENT SYSTEM===!!";
//		cout << "\n";
//		cout << "\n 1.INSERT";
//		cout << "\n 2.SEARCH";
//		cout << "\n 3.DISPLAY";
//		cout << "\n 4.DELETE";
//		cout << "\n 5.UPDATE";
//		cout << "\n 6.EXIT";
//		cout << "\n\n ENTER YOUR CHOICE:";
//		cin >> ch;
//		switch (ch) {
//		case 1: i = o[0].Insert(o, i);
//			break;
//		case 3: cout << "ROLL\tNAME\tSEC\tDEPT\n==============================================\n";
//			for (j = 0; j < i; j++) {
//				o[j].Display();
//			}
//			break;
//		case 2:
//			cout << "Enter the ROLL for Search:";
//			cin >> roll;
//
//			o[0].Search(o, roll, i);
//
//			break;
//		case 4:
//			cout << "Enter the ROLL to Delete:";
//			cin >> roll;
//			i = o[0].Del(o, i, roll);
//			break;
//		case 5:
//			cout << "Enter the ROLL For Data Update:";
//			cin >> roll;
//			i = o[0].Update(o, roll, i);
//			break;
//		default: cout << "Wrong Key!!";
//			break;
//		case 6: exit(0);
//		}
//	}
//
//}

#include <iostream>
#include <string>
#include "Stu.h"
using namespace std;


int main()
{
	Stu st[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "Student " << i + 1 << endl;
		cout << "Enter name" << endl;
		st[i].getName();
		cout << "Enter marks" << endl;
		st[i].getMarks();
		cin.ignore();
	}
	for (int i = 0; i < 5; i++)
	{
		cout << "Student " << i + 1 << endl;
		st[i].displayInfo();
	}
	return 0;
}