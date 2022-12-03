#include "lecturers.h"
#include<iostream>

using namespace std;


lecturers::lecturers()
{
	this->coefficientsSalary = 0;
	this->baseSalary = 0;
}

void lecturers::input()
{
	human::input();
	cout << "Enter Coefficients Salary: ";
	cin >> this->coefficientsSalary;
	cout << "Enter Base Salary: ";
	cin >> this->baseSalary;
}

void lecturers::update()
{
	human::update();
	cout << "Enter Coefficients Salary: ";
	cin >> this->coefficientsSalary;
	cout << "Enter Base Salary: ";
	cin >> this->baseSalary;
}

void lecturers::display()
{
	human::display();
	cout << "Salary: " << this->countSalary();
}

int lecturers::countSalary()
{
	return this->baseSalary*this->coefficientsSalary;
}
