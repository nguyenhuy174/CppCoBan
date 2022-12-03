#pragma once
#include "nguoi.h"
class trogiang :virtual public nguoi
{
private:
	int giocong;
public:
	trogiang(void);
	~trogiang(void);
	virtual void nhap();
	virtual void xuat();
	virtual long luong();
};
