#pragma once
class SoPhuc
{
private:
	float thuc, ao;
public:
	SoPhuc();
	SoPhuc(float thuc);
	SoPhuc(float thuc, float ao);

	void HienThi();
	
	friend SoPhuc& operator+(SoPhuc& s1, SoPhuc& s2);
	friend SoPhuc& operator+(SoPhuc& s1, float a);
	friend SoPhuc& operator+(float a, SoPhuc& s2);


	friend SoPhuc& operator-(SoPhuc& s1, SoPhuc& s2);
	friend SoPhuc& operator-(SoPhuc& s1, float a);
	friend SoPhuc& operator-(float a, SoPhuc& s2);

	friend SoPhuc& operator*(SoPhuc& s1, SoPhuc& s2);
	friend SoPhuc& operator*(SoPhuc& s1, float a);
	friend SoPhuc& operator*(float a, SoPhuc& s2);


	friend SoPhuc& operator/(SoPhuc& s1, SoPhuc& s2);
	friend SoPhuc& operator/(SoPhuc& s1, float a);
	friend SoPhuc& operator/(float a, SoPhuc& s2);
};

