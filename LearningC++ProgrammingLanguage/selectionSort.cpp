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

int main()
{
	int a[100], n;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sapXepChon(a, n);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "  ";
	}
}