#include <iostream>
using namespace std;

int main()
{
	int a[] = { 2,5,3,1,5,7,8,4 };
	int max = 0;
	for (int i = 0; i < 7; i++)
	{
		for (int j = i + 1; j < 8; j++)
		{
			if (a[i] + a[j] > max)
				max = a[i] + a[j];
		}
	}
	cout << max;
}