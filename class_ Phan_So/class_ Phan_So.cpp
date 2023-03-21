#include<iostream>
#include "PhanSo.h"
using namespace std;

int main()
{
	Phan_so a, b;
	cin >> a;
	cin >> b;
	Phan_so c = a + b;
	c.rut_gon();
	cout << c;
}