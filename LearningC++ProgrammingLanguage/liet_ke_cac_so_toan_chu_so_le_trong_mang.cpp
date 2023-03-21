#include<iostream>
using namespace std;
int check(int n)
{
	while (n) {
		int r = n % 10;
		if (r % 2 == 0)
			return 0;
		n = n / 10;
	}
	return 1;
}
int main()
{
	int n;
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if (check(a[i]))
		{
			cout << a[i] << " ";
		}
	}
}
