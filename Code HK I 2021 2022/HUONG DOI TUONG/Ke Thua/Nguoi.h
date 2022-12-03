#pragma once
#include<string>
using namespace std;
class Nguoi
{
protected:
	string ma;
	string ten;
	int tuoi;
	int luong;
	string chucvu;
public:
	Nguoi();
	Nguoi(string, string,int );

	void setMa(string);
	void setTen(string);
	void setTuoi(int);
	void setLuong(int);
	void setChucvu(string);


	string getMa();
	string getTen();
	int getTuoi();
	int getLuong();
	string getChucvu();

	virtual void input();
	virtual void update();

	virtual void output();

	virtual int Tinhluong();
};

