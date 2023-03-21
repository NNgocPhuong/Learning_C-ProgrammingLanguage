#include<iostream>
using namespace std;

int main()
{
	int N, C;
	cin >> N >> C;
	int* a = new int[N];
	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}
	int t = 0;
	for (int i = 0; i < N; i++)
	{
		t += a[i];
	}
	if (t >= C)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
