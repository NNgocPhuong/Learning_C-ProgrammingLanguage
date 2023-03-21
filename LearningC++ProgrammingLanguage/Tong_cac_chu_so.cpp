#include<iostream>
using namespace std;

int tong_chu_so(int a)
{
	int t = 0;
	while (a) {
		t = t + a % 10;
		a = a / 10;
	}
	return t;
}

int main()
{
	int a;
	cin >> a;
	cout << tong_chu_so(a);
}