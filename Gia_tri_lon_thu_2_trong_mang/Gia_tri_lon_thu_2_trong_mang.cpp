#include<iostream>
using namespace std;

int main()
{
	int a[] = { 5,4,6,1,2,6,6,2 };
	for (int i = 0; i < 7; i++)
	{
		for (int j = i + 1; j < 8; j++)
		{
			if (a[i] < a[j])
				swap(a[i], a[j]);
		}
	}
	int max = a[0];
	for (int i = 0; i < 8; i++)
	{
		if (a[i] != max) {
			cout << a[i];
			break;
		}
	}
	return 0;
}