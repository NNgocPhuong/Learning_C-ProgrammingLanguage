//Nhận vào một dãy số tăng dần, kiểm tra xem có số nào còn thiếu trong dãy số đó không, và in các số đó ra màn hình.
#include<iostream>
using namespace std;

void sang(int a[], int n) {
	int p[10001];
	for (int i = 0; i < 10000; i++)
	{
		p[i] = 1;
	}

	int i = 0;
	for (int j = 0; j < n; ) {
		if (a[j] != (i + a[0]))
		{
			p[i + a[0]] = 0;
			--j;
		}
		i++;
		j++;
	}

	for (int i = 0; i < 10000; i++)
	{
		if (p[i] == 0)
			cout << i << "  ";
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
	sang(a, n);
}