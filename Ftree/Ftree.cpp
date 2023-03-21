#include<iostream>
using namespace std;

int check(int a, int b)
{
	while (a != b)
	{
		if (a > b) {
			a = a / 2;
		}
		else
		{
			b = b / 2;
		}
	}
	return a;
}

int main()
{
	int T;
	cin >> T;
	int a[10], b[10];
	for (int i = 0; i < T; i++)
	{
		cin >> a[i] >> b[i];
	}
	for (int i = 0; i < T; i++)
	{
		cout << check(a[i], b[i]) << endl;
	}
}
