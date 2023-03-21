#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap so luong so muon xuat hien tren man hinh: ";
	cin >> n;
	int a0 = 0, a1 = 1;
	int a;
	if (n == 1)
		cout << a0;
	else if (n == 2)
		cout << a0 << " " << a1;
	else {
		cout << a0 << " " << a1 << " ";
		for (int i = 2; i < n; i++)
		{
			a = a0 + a1;
			cout << a << " ";
			a0 = a1;
			a1 = a;
		}
	}
	return 0;
}