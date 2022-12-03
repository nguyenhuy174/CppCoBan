#pragma once
#include "list_human.h"
#include"Employee.h"
#include"lecturers.h"
#include"tutors.h"
#include<iostream>
#include<string>
#define MAX 100

using namespace std;
int list_human::findId(string id)
{
	for (int i = 1; i <= this->size; i++) {
		if (this->list[i].getId() == id) {
			return i;
		}
	}
	return -1;
}

int list_human::findMajor(string major)
{
	int i;
	if (major == "Employee")
		i = 1;
	else if (major == "lecturers")
		i = 2;
	else {
		i = 3;
	}
	
	return i;
}

list_human::list_human()
{
	this->size = 0;
}


void list_human::addhuman()
{
	int option;
	do {
		system("cls");
		cout << "Choosed career\n";
		cout << "0 is exit\n";
		cout << "1 is employee\n";
		cout << "2 is lecturers\n";
		cout << "3 is tutors\n";
		cout << "Enter option: ";
		cin >> option;
		cin.ignore(1);
		if (option != 0 && option != 1 && option != 2 && option != 3) {
			cout << "Enroll!";
			system("pasue");
		}
		else if (option == 1) {
			human* a = new Employee;
			a->input();
			if (this->size == MAX) {
				cout << "full!\n ";
			}
			else
			{
				this->list[this->size + 1] = *a;
				this->list[this->size + 1].setSalary(a->countSalary());
				this->list[this->size + 1].setMajor("Employee");

				this->size++;
			}
			system("pasue");
		}
		else if (option == 2) {
			human* a = new lecturers;
			a->input();
			if (this->size == MAX) {
				cout << "full!\n ";
			}
			else
			{
				this->list[this->size + 1] = *a;
				this->list[this->size + 1].setSalary(a->countSalary());
				this->list[this->size + 1].setMajor("Lecturers");
				this->size++;
			}
			system("pasue");
		}
		else if (option == 3) {
			human* a = new tutors;
			a->input();
			if (this->size == MAX) {
				cout << "full!\n ";
			}
			else
			{
				this->list[this->size + 1] = *a;
				this->list[this->size + 1].setSalary(a->countSalary());
				this->list[this->size + 1].setMajor("Tutors");
				this->size++;
			}
			system("pasue");
		}

	} while (option != 0);
}

void list_human::removeHuman()
{
	string id;
	cout << "Enter id: ";
	getline(cin, id);
	int index = findId(id);
	if (index == -1) {
		cout << "Not found!\n";
	}
	else
	{
		for (int i = index; i <= this->size; i++) {
			this->list[i] = this->list[i + 1];
		}this->size--;
	}
}

void list_human::updateHuman()
{
	string id;
	cout << "Enter id: ";
	getline(cin, id);
	int index = findId(id);
	if (index == -1) {
		cout << "Not found!\n";
	}
	else {
		int major = findMajor(this->list[index].getMajor());
		if (major == 1) {
			human* a = new Employee;
			a->update();
			this->list[index] = *a;
			this->list[index].setSalary(a->countSalary());
			this->list[index].setId(id);
			this->list[index].setMajor("Employee");
		}
		else if (major == 2) {
			human* a = new lecturers;
			a->update();
			this->list[index] = *a;
			this->list[index].setSalary(a->countSalary());
			this->list[index].setId(id);
			this->list[index].setMajor("Lecturers");
		}
		else {
			human* a = new tutors;
			a->update();
			this->list[index] = *a;
			this->list[index].setSalary(a->countSalary());
			this->list[index].setId(id);
			this->list[index].setMajor("Tutors");
		}
	}

}

void list_human::showhuman()
{
	for (int i = 1; i <= this->size; i++) {
		cout << "======================================\n";
		this->list[i].display();
	}
}




