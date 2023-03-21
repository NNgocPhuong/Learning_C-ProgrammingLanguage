#include<iostream>
using namespace std;

int main()
{
	int n, m;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cin >> m;
	int* b = new int[m];
	for (int i = 0; i < m; i++)
	{
		cin >> b[i];
	}
	int cnt[10000] = { 0 };
	for (int i = 0; i < m; i++) {
		cnt[b[i]]++;
	}
	for (int i = 0; i < n; i++)
	{
		cnt[a[i]]--;
	}
	for (int i = 0; i < m; i++)
	{
		if (cnt[b[i]]) {
			cout << b[i] << " ";
			cnt[b[i]] = 0;
		}
	}
	delete[]a;
	delete[]b;
	return 0;
}
