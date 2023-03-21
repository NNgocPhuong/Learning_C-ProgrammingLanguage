#include<iostream>
using namespace std;

int main()
{
	int a[100], cnt[1001] = {0}, n;
	cout << "Nhap n:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		cnt[a[i]]++;
	}
	for (int i = 0; i < n; i++)
	{
		if (cnt[a[i]] != 0) {
			cout << a[i] << "  :  " << cnt[a[i]] << endl;
			cnt[a[i]] = 0;
		}
	}
}