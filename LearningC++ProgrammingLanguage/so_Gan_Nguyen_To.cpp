#include<iostream>
using namespace std;

int ktra_so_gan_nguyen_to(int a)
{
	int cnt = 0;
	if (a > 2) {
		for (int i = 2; i < a; i++)
		{
			if (a % i == 0) {
				cnt++;
			}
		}
		if (cnt == 1)
			return 1;
	}
	return 0;
}
int main()
{
	int* a;
	int n;
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (ktra_so_gan_nguyen_to(a[i]))
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
}