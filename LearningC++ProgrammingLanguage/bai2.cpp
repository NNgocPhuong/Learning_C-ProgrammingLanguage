#include<iostream>
#include<string>
using namespace std;

int main()
{
	string a;
	getline(cin, a);
	for (int i = 0; i < a.length(); i++)
	{
		if (a[i] >= 65 && a[i] <= 90)
		{
			a[i] += 32;
		}
	}
	a[0] = toupper(a[0]);
	cout << a;
	return 0;
}