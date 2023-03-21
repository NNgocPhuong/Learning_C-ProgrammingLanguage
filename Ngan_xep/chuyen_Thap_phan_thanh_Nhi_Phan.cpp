#include<iostream>
#include<stack>
using namespace std;

int main()
{
	stack <int> s;
	int a;
	cout << "Nhap so a: ";
	cin >> a;
	while (a) {
		int b = a % 2;
		a = a / 2;
		s.push(b);
	}
	while (!s.empty())
	{
		cout << s.top();
		s.pop();
	}
}
