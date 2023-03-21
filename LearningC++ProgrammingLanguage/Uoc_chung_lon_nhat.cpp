#include<iostream>
using namespace std;

int gcd1(int a, int b)
{
	if (a == 0 || b == 0)
	{
		return a + b;
	}
	while (a != b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a;
}
int gcd2(int a, int b)
{
	for (int i = min(a, b); i > 0; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			return i;
		}
	}
}
int gcd3(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	return gcd3(b, a % b);
}
int main()
{
	int a, b;
	cin >> a >> b;
	cout << gcd1(a, b);
	cout << gcd2(a, b);
	cout << gcd3(a, b);
	// cách tìm UCLN thứ 4
	while (b) {
		int r = a % b;
		a = b;
		b = r;
	}
	cout << a;
}