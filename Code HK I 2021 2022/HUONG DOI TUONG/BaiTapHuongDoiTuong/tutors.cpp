#include "tutors.h"
#include<iostream>

using namespace std;
tutors::tutors()
{
	this->SalaryOneHour = 0;
	this->workTime = 0;
}

void tutors::update()
{
	human::update();
	cout << "Enter Salary One Hour: ";
	cin >> this->SalaryOneHour;
	cout << "Enter Work Time: ";
	cin >> this->workTime;
}

void tutors::input()
{
	human::input();
	cout << "Enter Salary One Hour: ";
	cin >> this->SalaryOneHour;
	cout << "Enter Work Time: ";
	cin >> this->workTime;
}

void tutors::output()
{
	human::display();
	cout << "Salary: " << countSalary();

}

int tutors::countSalary()
{
	return this->SalaryOneHour*this->workTime;
}
