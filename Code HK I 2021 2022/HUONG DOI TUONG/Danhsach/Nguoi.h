#pragma once
#include<string>

using namespace std;
class Nguoi
{
protected:
	string id;
	string name;
	int age;
	string sex;
	string address;
	int salary;
	string major;
public:
	Nguoi();
	Nguoi(string, string, int, string, string);

	void setId(string);
	void setName(string);
	void setAge(int);
	void setSex(string);
	void setAddress(string);
	void setSalary(int);
	void setMajor(string);

	string getId();
	string getName();
	int getAge();
	string getSex();
	string getAddress();
	int getSalary();
	string getMajor();

	virtual void input();
	virtual void update();
	virtual void display();
	virtual int countSalary();
};

