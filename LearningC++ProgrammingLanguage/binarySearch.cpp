#include<iostream>
using namespace std;

void sapXepChon(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		int min_pos = i;
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] < a[min_pos]) {
				swap(a[j], a[min_pos]);
			}
		}
	}
}
int timKiemNhiPhan(int a[], int n, int b) {
	int left = 0;
	int right = n - 1;
	while (left < right) {
		int m = (left + right) / 2;
		if (a[m] == b) {
			return 1;
		}
		else if (a[m] > b) {
			right = m - 1;
		}
		else
			left = m + 1;
	}
	return 0;
}

int main()
{
	int a[100], n;
	cout << "Nhap n:";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sapXepChon(a, n);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "  ";
	}
	int b;
	cout << "Nhap so can tim: ";
	cin >> b;
	if (timKiemNhiPhan(a, n, b))
		cout << "\nYES";
	else cout << "\nNO";
	return 0;
}