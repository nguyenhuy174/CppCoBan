#include "Stu.h"

void Stu::getName()
{
	getline(cin, name);
}

void Stu::getMarks()
{
	cin >> marks;
}

void Stu::displayInfo()
{
	cout << "Name : " << name << endl;
	cout << "Marks : " << marks << endl;
}
