#include<iostream>
using namespace std;

void fibo(int n)
{
	int* a = new int[n];
	a[0] = 0;
	a[1] = 1;
	for (int i = 2; i < n; i++)
	{
		a[i] = a[i - 1] + a[i - 2];
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}
int main()
{
	int n;
	cin >> n;
	fibo(n);
}