#include "human.h"
#include<iostream>
#include<string>

using namespace std;

human::human()
{
	this->id = id;
	this->name = "Empty";
	this->age = 0;
	this->address = "Empty";
	this->sex = "Empty";
	this->salary = 0;
}

human::human(string id,string name, int age, string address, string sex)
{
	this->id = id;
	this->name = name;
	this->age = age;
	this->address = address;
	this->sex = sex;
}

void human::setId(string id)
{
	this->id = id;
}

void human::setName(string name)
{
	this->name = name;
}

void human::setAge(int age)
{
	this->age = age;
}

void human::setSex(string sex)
{
	this->sex = sex;
}

void human::setAddress(string address)
{
	this->address = address;
}

void human::setSalary(int salary)
{
	this->salary = salary;
}

void human::setMajor(string major)
{
	this->major = major;
}

string human::getId()
{
	return this->id;
}

string human::getName()
{
	return this->name;
}

int human::getAge()
{
	return this->age=age;
}

string human::getSex()
{
	return this->sex;
}

string human::getAddress()
{
	return this->address;
}

int human::getSalary()
{
	return this->salary;
}

string human::getMajor()
{
	return this->major;
}

void human::input()
{
	cout << "Enter id: ";
	getline(cin, this->id);
	cout << "Enter Name: ";
	getline(cin,this->name);
	cout << "Enter Age: ";
	cin >> this->age;
	cin.ignore(1);
	cout << "Enter Sex: ";
	getline(cin, this->sex);
	cout << "Enter Address: ";
	getline(cin, this->address);
}

void human::update()
{
	cout << "Enter Name: ";
	getline(cin, this->name);
	cout << "Enter Age: ";
	cin >> this->age;
	cin.ignore(1);
	cout << "Enter Sex: ";
	getline(cin, this->sex);
	cout << "Enter Address: ";
	getline(cin, this->address);
}

void human::display()
{
	cout << "id: " << this->id << endl;
	cout << "Name: " << this->name <<endl;
	cout << "Age: " << this->age << endl;
	cout << "Sex: " << this->sex << endl;
	cout << "Address: " << this->address << endl;
	cout << "Salary: " << this->salary << endl;
	cout << "Major: " << this->major << endl;
}

int human::countSalary()
{
	return 0;
}
