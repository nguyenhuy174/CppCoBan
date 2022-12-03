#include "Nguoi.h"
#include "Giangvien.h"
#include "Nhanvien.h"
#include "Trogiang.h"
#include<iostream>
#include<string>

using namespace std;

Nguoi::Nguoi()
{
	this->id = id;
	this->name = "Empty";
	this->age = 0;
	this->address = "Empty";
	this->sex = "Empty";
	this->salary = 0;
}

Nguoi::Nguoi(string id, string name, int age, string address, string sex)
{
	this->id = id;
	this->name = name;
	this->age = age;
	this->address = address;
	this->sex = sex;
}

void Nguoi::setId(string id)
{
	this->id = id;
}

void Nguoi::setName(string name)
{
	this->name = name;
}

void Nguoi::setAge(int age)
{
	this->age = age;
}

void Nguoi::setSex(string sex)
{
	this->sex = sex;
}

void Nguoi::setAddress(string address)
{
	this->address = address;
}

void Nguoi::setSalary(int salary)
{
	this->salary = salary;
}

void Nguoi::setMajor(string major)
{
	this->major = major;
}

string Nguoi::getId()
{
	return this->id;
}

string Nguoi::getName()
{
	return this->name;
}

int Nguoi::getAge()
{
	return this->age = age;
}

string Nguoi::getSex()
{
	return this->sex;
}

string Nguoi::getAddress()
{
	return this->address;
}

int Nguoi::getSalary()
{
	return this->salary;
}

string Nguoi::getMajor()
{
	return this->major;
}

void Nguoi::input()
{
	cout << "Enter id: ";
	getline(cin, this->id);
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

void Nguoi::update()
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

void Nguoi::display()
{
	cout << "id: " << this->id << endl;
	cout << "Name: " << this->name << endl;
	cout << "Age: " << this->age << endl;
	cout << "Sex: " << this->sex << endl;
	cout << "Address: " << this->address << endl;
	cout << "Salary: " << this->salary << endl;
	cout << "Major: " << this->major << endl;
}

int Nguoi::countSalary()
{
	return 0;
}
