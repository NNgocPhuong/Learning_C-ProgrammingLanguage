#include<iostream>
using namespace std;

void Array(int**& a, int m, int n)
{
	a = new int*[m];
	for (int i = 0; i < n; i++)
	{
		a[i] = new int[n];
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "]= ";
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << a[i][j];
		}
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		delete[]a[i];
	}
	delete[]a;
}

int main()
{
	int** a;
	Array(a, 3, 3);
	return 0;
}