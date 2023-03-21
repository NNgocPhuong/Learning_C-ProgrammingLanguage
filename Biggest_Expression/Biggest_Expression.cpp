#include<iostream>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	int* a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] < a[j])
			{
				swap(a[i], a[j]);
			}
		}
	}
	int t = 0;
	for (int i = 0; i <= k; i++)
	{
		t += a[i];
	}
	for (int i = k + 1; i < n; i++)
	{
		t -= a[i];
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << endl;
	}
	cout << t;
	delete[]a;

	return 0;
}
