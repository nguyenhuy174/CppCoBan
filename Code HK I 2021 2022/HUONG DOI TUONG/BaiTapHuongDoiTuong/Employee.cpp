#include "Employee.h"
#include<iostream>

using namespace std;

Employee::Employee()
{
    this->dayWork = 0;
    this->salaryOneDay = 0;
}

void Employee::input()
{
    human::input();
    cout << "Enter Days Work: ";
    cin >> this->dayWork;
    cout << "Enter Salary One Day: ";
    cin >> this->salaryOneDay;
    cin.ignore(1);
}

void Employee::display()
{
    human::display();
    cout << "Salary: " << this->countSalary();
}

void Employee::update()
{
    human::update();
    cout << "Enter Days Work: ";
    cin >> this->dayWork;
    cout << "Enter Salary One Day: ";
    cin >> this->salaryOneDay;
    cin.ignore(1);
}

void Employee::setSalaryOneDay(int SalaryOneDay)
{
    this->salaryOneDay = SalaryOneDay;
}

void Employee::setDayWork(int dayWork)
{
    this->dayWork = dayWork;
}

int Employee::getSalaryOneDay()
{
    return this->salaryOneDay;
}

int Employee::getDayWork()
{
    return this->dayWork;
}



int Employee::countSalary()
{
    return this->dayWork*this->salaryOneDay;
}
