#include<iostream>
using namespace std;

long long tong_cac_chu_so(long long a)
{
	int t = 0;
	while (a)
	{
		t += a % 10;
		a = a / 10;
	}
	return t;
}

int check(long long a)
{
	if (tong_cac_chu_so(a) >= 10) {
		int t = tong_cac_chu_so(a);
		return check(t);
	}
	return tong_cac_chu_so(a);
}

int main()
{
	int T;
	cin >> T;
	long long *a = new long long[T];
	for (int i = 0; i < T; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < T; i++)
	{
		cout << "#" << i + 1 << " " << check(a[i]) << endl;
	}
	return 0;
}
