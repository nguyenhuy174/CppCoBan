#include "ClsTron.h"
#include <isotream>
ClsTron::ClsTron(string ten):Hinh(ten)
{
	//this->ten = ten;
	//Hinh(ten); goi den constructor lop cha
	std::cout << "day la constructor lop con" << endl;
}

ClsTron:: ClsTron()
{

}

ClsTron:: ~ClsTron()
{
	std::cout << "day la destructor lop con" << endl;
}

float ClsTron::chuVi()
{
	return -1;
}




