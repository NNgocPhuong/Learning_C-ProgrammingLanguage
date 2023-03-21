#include<iostream>
#include<set>;
using namespace std;

int main()
{
	int n, k;
	cout << "Nhap so phan tu cua mang va so phan tu trong 1 cua so: ";
	cin >> n >> k;
	int* a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	multiset<int> s;
	for (int i = 0; i < k; i++)
	{
		s.insert(a[i]);
	}
	for (int i = k; i < n; i++)
	{
		cout << *s.rbegin() << "  ";
		s.erase(s.find(a[i - k]));
		s.insert(a[i]);
	}
	cout << *s.rbegin();
}
