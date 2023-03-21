#include<iostream>
using namespace std;

void insertion_Sort(int a[], int n)
{
	for (int i = 1; i < n; i++)
	{
		int key = a[i];
		int j = i - 1;
		while (j >= 0)
		{
			if (key < a[j])
			{
				a[j + 1] = a[j];
				j--;
			}
			else
			{
				break;
			}
		}
		a[j + 1] = key;
	}
}
int main()
{
	int a[] = { 1,6,3,5,9,0,7 };
	int n = sizeof(a) / sizeof(a[0]);
	insertion_Sort(a, n);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}
