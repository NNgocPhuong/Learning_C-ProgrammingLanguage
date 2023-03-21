#include <iostream>
using namespace std;

int max(int a, int b) {
	if (a > b)
		return a;
	return b;
}

void sieve(int l, int r)
{
	int* p = new int[r - l + 1];
	for (int i = 0; i < r - l + 1; i++)
	{
		p[i] = 1;
	}
	for (int i = 2; i <= sqrt(r); i++)
	{
		for (int j = max(i * i, ((l + i - 1) / i) * i); j <= r; j += i)
		{
			p[j - l] = 0;
		}
	}
	for (int i = max(l, 2); i <= r; i++)
	{
		if (p[i - l])
			cout << i << "  ";
	}
}

int main()
{
	int l, r;
	cin >> l >> r;
	sieve(l, r);
}