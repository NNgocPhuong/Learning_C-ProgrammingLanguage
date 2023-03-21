#include<iostream>
using namespace std;

int find_fibo(int n)
{
	if (n == 1)
		return 0;
	else if (n == 2)
		return 1;
	else
		return find_fibo(n - 1) + find_fibo(n - 2);
}

int main()
{
	int n;
	cout << "Hay nhap so n nguyen duong: ";
	cin >> n;
	cout << "So fibonaci o vi tri thu n la: " << find_fibo(n);
	return 0;
}