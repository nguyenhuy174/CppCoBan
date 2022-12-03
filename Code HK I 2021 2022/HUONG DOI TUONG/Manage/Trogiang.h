#pragma once
#include "Nguoi.h"
class Trogiang :virtual public Nguoi
{
private:
	int giocong;
public:
	Trogiang(void);
	~Trogiang(void);
	virtual void nhap();
	virtual void xuat();
	virtual long luong();
};
