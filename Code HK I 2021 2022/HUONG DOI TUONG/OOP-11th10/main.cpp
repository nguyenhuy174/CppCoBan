#include<iostream>
using namespace std;
//long.vu@ut.edu.vn

int main()
{
	Hinh* h = new ClsTron("hinh tron");
	//Hinh* h = new Hinh();
	//ClsTron* h = new ClsTron("hinh tron");
	// => constructor nao chay truoc? ( cha/ con ?)
	//Hinh* h = new Hinh("hinh chung chung";
	h->hienThi();
	cout << h->chuVi();
	delete h;
// Bai tap: xay dung cac lop Nguoi, nhan vien, giang vien, tro giang
//thuc hien cac thao tac quan ly CRUD (create, read, update, delete) danh sach "nguoi" trong don vi
//thuc hien tinh thu nhap cho moi loai doi tuong theo nhung cach khac nhau


}