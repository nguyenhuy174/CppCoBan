#pragma once
class Giangvien :public Nguoi
{
private:
	long luongcb;
	int heso;
public:
	Giangvien();
	void input();
	void update();
	void display();
	int countSalary();
};

