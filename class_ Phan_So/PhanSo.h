#pragma once
#include<iostream>
using namespace std;
class Phan_so {
private:
	int tuSo;
	int mauSo;
public:
	Phan_so(int a = 0, int b = 1) : tuSo(a), mauSo(b){}
	Phan_so& rut_gon();
	friend ostream& operator<<(ostream& out, Phan_so& a) {
		if (a.tuSo == 0 || a.mauSo == 1)
		{
			out << a.tuSo;
		}
		out << a.tuSo << "/" << a.mauSo << endl;
		return out;
	}
	friend istream& operator >> (istream& in, Phan_so& a)
	{
		cout << "Nhap tu so: ";
		in >> a.tuSo;
		cout << "Nhap mau so: ";
		in >> a.mauSo;
		return in;
	}
	friend Phan_so operator + (Phan_so& a, Phan_so& b)
	{
		return Phan_so(a.tuSo * b.mauSo + b.tuSo * a.mauSo, a.mauSo * b.mauSo);	
	}
	friend bool operator ==(Phan_so& a, Phan_so& b)
	{
		return (a.tuSo * b.mauSo == a.mauSo * b.tuSo);
	}
	Phan_so& operator += (Phan_so& a)
	{
		return (*this = *this + a);
	}
	Phan_so& operator ++()
	{
		tuSo = tuSo + mauSo;
		return *this;
	}

};