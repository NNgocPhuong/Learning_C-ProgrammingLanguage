#include<iostream>
#include"PhanSo.h"
using namespace std;

Phan_so& Phan_so :: rut_gon() {
	int u = tuSo;
	int b = mauSo;
	while (b) {
		int r = u % b;
		u = b;
		b = r;
	}
	tuSo = tuSo / u;
	mauSo = mauSo / u;
	return *this;
}