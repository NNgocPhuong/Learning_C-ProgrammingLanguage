#include<iostream>
#include<math.h>
using namespace std;

int xac_dinh_snt(int a) {
	for (int i = 2; i <= sqrt(a); i++)
	{
		if (a % i == 0)
			return 0;
	}
	return a > 1;
}
int main()
{
	int x;
	cin >> x;
	if (xac_dinh_snt(x))
		cout << "Yes";
	else
		cout << "NO";
}