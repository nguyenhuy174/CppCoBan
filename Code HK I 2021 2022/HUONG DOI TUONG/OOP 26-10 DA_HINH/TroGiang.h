#pragma once
class TroGiang:public SinhVien, public GiangVien
{

public:
	TroGiang(int ma, string ten, float luong, float diem);
	void hienThi();
	void lamViec();
};

