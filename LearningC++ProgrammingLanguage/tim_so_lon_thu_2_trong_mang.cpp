#include<iostream>
using namespace std;

int main() {
	int a[] = { 1,4,6,9,10,10,3 };
	int max1 = -1e9 - 1;
	int max2 = -1e9 - 1;
	for (int i = 0; i < 7; i++)
	{
		if (a[i] > max1) {
			max2 = max1;
			max1 = a[i];
		}
		else if (a[i] > max2 && a[i] != max1)
		{
			max2 = a[i];
		}
	}
	cout << max2;
}
