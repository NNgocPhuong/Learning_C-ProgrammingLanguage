#include<iostream>
using namespace std;

int check(int a) {
	int t = 0;
	for (int i = 1; i <= a / 2; i++)
	{
		if (a % i == 0)
		{
			t += i;
		}
	}
	if (t == a) {
		return 1;
	}
	return 0;
}
int main()
{
	int a;
	cin >> a;
	if (check(a)) {
		cout << a << " la so hoan hao";
	}
	else
		cout << a << " khong phai so hoan hao";
}