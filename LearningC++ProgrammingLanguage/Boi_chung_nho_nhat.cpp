#include<iostream>
using namespace std;

int UCLN(int a, int b)
{
	if (b == 0) {
		return a;
	}
	return UCLN(b, a % b);
}
int BCNN(int a, int b)
{
	return a * b / UCLN(a, b);
}
int main() {
	int a, b;
	cin >> a >> b;
	cout << BCNN(a, b);
}